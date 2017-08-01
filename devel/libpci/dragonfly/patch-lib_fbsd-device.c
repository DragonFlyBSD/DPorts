diff --git a/lib/fbsd-device.c b/lib/fbsd-device.c
index ab04954..78067dc 100644
--- lib/fbsd-device.c
+++ lib/fbsd-device.c
@@ -3,6 +3,7 @@
  *
  *	Copyright (c) 1999 Jari Kirma <kirma@cs.hut.fi>
  *	Updated in 2003 by Samy Al Bahra <samy@kerneled.com>
+ *	Updated in 2017 by Imre Vadász <imrevdsz@gmail.com>
  *
  *	Can be freely distributed and used under the terms of the GNU GPL.
  */
@@ -10,6 +11,7 @@
 #include <errno.h>
 #include <fcntl.h>
 #include <stdio.h>
+#include <stdlib.h>
 #include <string.h>
 #include <unistd.h>
 #include <osreldate.h>
@@ -54,16 +56,195 @@ static void
 fbsd_init(struct pci_access *a)
 {
   char *name = pci_get_param(a, "fbsd.path");
+  int fd;
 
-  a->fd = open(name, O_RDWR, 0);
-  if (a->fd < 0)
-    a->error("fbsd_init: %s open failed", name);
+  a->fd = -1;
+  a->fd_rw = -1;
+  /*
+   * When opening /dev/pci as read-write fails, retry with readonly which
+   * will still allow us to gain some information via the PCIOCGETCONF and
+   * PCIOCGETBAR IOCTLs, even without generic read access to the PCI config
+   * space.
+   */
+  fd = open(name, O_RDWR, 0);
+  if (fd < 0)
+    {
+      fd = open(name, O_RDONLY, 0);
+      if (fd < 0)
+	a->error("fbsd_init: %s open failed", name);
+      else
+	{
+	  a->debug("fbsd_init: Fallback to read-only opened %s", name);
+	  a->fd = fd;
+	}
+    }
+  else
+    a->fd_rw = fd;
 }
 
 static void
 fbsd_cleanup(struct pci_access *a)
 {
-  close(a->fd);
+  if (a->fd >= 0)
+    {
+      close(a->fd);
+      a->fd = -1;
+    }
+  if (a->fd_rw >= 0)
+    {
+      close(a->fd_rw);
+      a->fd_rw = -1;
+    }
+}
+
+static void
+fbsd_scan(struct pci_access *a)
+{
+  struct pci_conf_io conf;
+  struct pci_conf *matches;
+  struct pci_dev *t;
+  uint32_t offset = 0;
+  unsigned int i;
+
+  matches = calloc(32, sizeof(struct pci_conf));
+  if (matches == NULL)
+    {
+      a->error("calloc: %s", strerror(errno));
+      return;
+    }
+
+  conf.generation = 0;
+  do
+    {
+      conf.pat_buf_len = 0;
+      conf.num_patterns = 0;
+      conf.patterns = NULL;
+      conf.match_buf_len = 32 * sizeof(struct pci_conf);
+      conf.num_matches = 32;
+      conf.matches = matches;
+      conf.offset = offset;
+      conf.status = 0;
+      if (ioctl(a->fd_rw >= 0 ? a->fd_rw : a->fd, PCIOCGETCONF, &conf) < 0)
+	{
+	  if (errno == ENODEV)
+	    break;
+	  a->error("fbsd_scan: ioctl(PCIOCGETCONF) failed: %s",
+	      strerror(errno));
+	}
+      /* PCI_GETCONF_LIST_CHANGED would require us to start over. */
+      if (conf.status == PCI_GETCONF_ERROR ||
+	  conf.status == PCI_GETCONF_LIST_CHANGED)
+	{
+	  a->error("fbsd_scan: ioctl(PCIOCGETCONF) failed");
+	  break;
+	}
+      for (i = 0; i < conf.num_matches; i++)
+        {
+	  t = pci_alloc_dev(a);
+	  t->bus = matches[i].pc_sel.pc_bus;
+	  t->dev = matches[i].pc_sel.pc_dev;
+	  t->dev = matches[i].pc_sel.pc_dev;
+	  t->domain = matches[i].pc_sel.pc_domain;
+	  t->domain_16 = matches[i].pc_sel.pc_domain;
+	  t->vendor_id = matches[i].pc_vendor;
+	  t->device_id = matches[i].pc_device;
+	  t->known_fields = PCI_FILL_IDENT;
+	  t->hdrtype = matches[i].pc_hdr;
+	  pci_link_dev(a, t);
+	}
+      offset += conf.num_matches;
+    }
+  while (conf.status == PCI_GETCONF_MORE_DEVS);
+
+  free(matches);
+}
+
+static int
+fbsd_fill_info(struct pci_dev *d, int flags)
+{
+  struct pci_conf_io conf;
+  struct pci_bar_io bar;
+  struct pci_match_conf pattern;
+  struct pci_conf match;
+  int i;
+
+  if (d->access->fd_rw >= 0)
+    return pci_generic_fill_info(d, flags);
+
+  /*
+   * Can only handle PCI_FILL_IDENT, PCI_FILL_CLASS, PCI_FILL_BASES and
+   * PCI_FILL_SIZES requests with the PCIOCGETCONF and PCIOCGETBAR IOCTLs.
+   */
+
+  conf.pat_buf_len = sizeof(struct pci_match_conf);
+  conf.num_patterns = 1;
+  conf.patterns = &pattern;
+  conf.match_buf_len = sizeof(struct pci_conf);
+  conf.num_matches = 1;
+  conf.matches = &match;
+  conf.offset = 0;
+  conf.generation = 0;
+  conf.status = 0;
+
+  pattern.pc_sel.pc_domain = d->domain;
+  pattern.pc_sel.pc_bus = d->bus;
+  pattern.pc_sel.pc_dev = d->dev;
+  pattern.pc_sel.pc_func = d->func;
+  pattern.flags = PCI_GETCONF_MATCH_DOMAIN | PCI_GETCONF_MATCH_BUS |
+	  PCI_GETCONF_MATCH_DEV | PCI_GETCONF_MATCH_FUNC;
+
+  if (ioctl(d->access->fd, PCIOCGETCONF, &conf) < 0)
+    {
+      if (errno == ENODEV)
+        return 0;
+      d->access->error("fbsd_fill_info: ioctl(PCIOCGETCONF) failed: %s", strerror(errno));
+    }
+
+  if (flags & PCI_FILL_IDENT)
+    {
+      d->vendor_id = match.pc_vendor;
+      d->device_id = match.pc_device;
+    }
+  if (flags & PCI_FILL_CLASS)
+    {
+      d->device_class = match.pc_class | (match.pc_subclass << 8);
+    }
+  if (flags & (PCI_FILL_BASES | PCI_FILL_SIZES))
+    {
+      d->rom_base_addr = 0;
+      d->rom_size = 0;
+      for (i = 0; i < 6; i++)
+        {
+	  bar.pbi_sel.pc_domain = d->domain;
+	  bar.pbi_sel.pc_bus = d->bus;
+	  bar.pbi_sel.pc_dev = d->dev;
+	  bar.pbi_sel.pc_func = d->func;
+	  bar.pbi_reg = 0x10 + 4*i;
+	  bar.pbi_enabled = 0;
+	  bar.pbi_base = 0;
+	  bar.pbi_length = 0;
+	  if (ioctl(d->access->fd, PCIOCGETBAR, &bar) < 0)
+	    {
+	      if (errno == ENODEV)
+		return 0;
+	      if (errno == EINVAL)
+	        {
+		  d->base_addr[i] = 0;
+		  d->size[i] = 0;
+		}
+	      else
+	        d->access->error("fbsd_fill_info: ioctl(PCIOCGETBAR) failed: %s", strerror(errno));
+	    }
+	  else
+	    {
+	      d->base_addr[i] = bar.pbi_base;
+	      d->size[i] = bar.pbi_length;
+	    }
+	}
+    }
+
+  return flags & (PCI_FILL_IDENT | PCI_FILL_CLASS | PCI_FILL_BASES |
+		  PCI_FILL_SIZES);
 }
 
 static int
@@ -71,13 +252,19 @@ fbsd_read(struct pci_dev *d, int pos, byte *buf, int len)
 {
   struct pci_io pi;
 
+  if (d->access->fd_rw < 0)
+    {
+      d->access->warning("fbsd_read: missing permissions");
+      return 0;
+    }
+
   if (!(len == 1 || len == 2 || len == 4))
     return pci_generic_block_read(d, pos, buf, len);
 
-  if (pos >= 256)
+  if (pos >= 4096)
     return 0;
 
-#if __FreeBSD_version >= 700053
+#if __FreeBSD_version >= 700053 || defined(__DragonFly__)
   pi.pi_sel.pc_domain = d->domain;
 #endif
   pi.pi_sel.pc_bus = d->bus;
@@ -87,7 +274,7 @@ fbsd_read(struct pci_dev *d, int pos, byte *buf, int len)
   pi.pi_reg = pos;
   pi.pi_width = len;
 
-  if (ioctl(d->access->fd, PCIOCREAD, &pi) < 0)
+  if (ioctl(d->access->fd_rw, PCIOCREAD, &pi) < 0)
     {
       if (errno == ENODEV)
 	return 0;
@@ -114,13 +301,19 @@ fbsd_write(struct pci_dev *d, int pos, byte *buf, int len)
 {
   struct pci_io pi;
 
+  if (d->access->fd_rw < 0)
+    {
+      d->access->warning("fbsd_write: missing permissions");
+      return 0;
+    }
+
   if (!(len == 1 || len == 2 || len == 4))
     return pci_generic_block_write(d, pos, buf, len);
 
-  if (pos >= 256)
+  if (pos >= 4096)
     return 0;
 
-#if __FreeBSD_version >= 700053
+#if __FreeBSD_version >= 700053 || defined(__DragonFly__)
   pi.pi_sel.pc_domain = d->domain;
 #endif
   pi.pi_sel.pc_bus = d->bus;
@@ -143,7 +336,7 @@ fbsd_write(struct pci_dev *d, int pos, byte *buf, int len)
       break;
     }
 
-  if (ioctl(d->access->fd, PCIOCWRITE, &pi) < 0)
+  if (ioctl(d->access->fd_rw, PCIOCWRITE, &pi) < 0)
     {
       if (errno == ENODEV)
 	return 0;
@@ -160,8 +353,8 @@ struct pci_methods pm_fbsd_device = {
   fbsd_detect,
   fbsd_init,
   fbsd_cleanup,
-  pci_generic_scan,
-  pci_generic_fill_info,
+  fbsd_scan,
+  fbsd_fill_info,
   fbsd_read,
   fbsd_write,
   NULL,                                 /* read_vpd */
