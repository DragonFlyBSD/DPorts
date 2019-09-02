--- src/runtime/bsd-os.h.orig	2016-12-31 08:38:30 UTC
+++ src/runtime/bsd-os.h
@@ -24,7 +24,7 @@
 typedef caddr_t os_vm_address_t;
 #if defined __NetBSD__
 typedef vsize_t os_vm_size_t;
-#elif defined __OpenBSD__
+#elif defined __OpenBSD__ || defined __DragonFly__
 typedef size_t os_vm_size_t;
 #else
 typedef vm_size_t os_vm_size_t;
