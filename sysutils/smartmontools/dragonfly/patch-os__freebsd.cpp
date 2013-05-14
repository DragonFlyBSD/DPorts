--- os_freebsd.cpp.orig	2013-02-10 15:36:55.000000000 +0000
+++ os_freebsd.cpp
@@ -1272,6 +1272,12 @@ smart_device * freebsd_scsi_device::auto
   if (len < 36)
     return this;
 
+  if (m_camdev == NULL) {
+      close();
+      set_err(EINVAL, "m_camdev not set");
+      return this;
+  }
+
   // Use INQUIRY to detect type
 
   // 3ware ?
