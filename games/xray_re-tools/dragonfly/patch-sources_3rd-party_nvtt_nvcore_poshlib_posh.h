--- sources/3rd-party/nvtt/nvcore/poshlib/posh.h.intermediate	2019-05-13 12:31:54.000000000 +0000
+++ sources/3rd-party/nvtt/nvcore/poshlib/posh.h
@@ -293,6 +293,11 @@ Metrowerks:
 #  define POSH_OS_STRING "Linux"
 #endif
 
+#if defined __DragonFly__
+#  define POSH_OS_LINUX 1
+#  define POSH_OS_STRING "DragonFly"
+#endif
+
 #if defined __FreeBSD__
 #  define POSH_OS_LINUX 1
 #  define POSH_OS_STRING "FreeBSD"
