--- src/freebsd_pci.c.intermediate	2021-03-21 16:05:00.000000000 +0000
+++ src/freebsd_pci.c
@@ -625,6 +625,11 @@ pci_system_freebsd_create( void )
 
     /* Try to open the PCI device */
     pcidev = open( "/dev/pci", O_RDWR | O_CLOEXEC );
+#ifdef __DragonFly__
+    /* if we failed (non-root), retry readonly */
+    if ( pcidev < 0 )
+	pcidev = open( "/dev/pci", O_RDONLY | O_CLOEXEC );
+#endif
     if ( pcidev == -1 )
 	return ENXIO;
 
