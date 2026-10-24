--- src/corelib/global/qsystemdetection.h.orig
+++ src/corelib/global/qsystemdetection.h
@@ -27,6 +27,7 @@
      HPUX     - HP-UX
      LINUX    - Linux [has variants]
      FREEBSD  - FreeBSD [has variants]
+     DRAGONFLY- DragonFly BSD
      NETBSD   - NetBSD
      OPENBSD  - OpenBSD
      INTERIX  - Interix
@@ -99,10 +100,13 @@
 #  define Q_OS_WASM
 #elif defined(__linux__) || defined(__linux)
 #  define Q_OS_LINUX
-#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 #  define Q_OS_FREEBSD
 #  define Q_OS_FREEBSD_KERNEL
 #  define Q_OS_BSD4
+#elif defined(__DragonFly__)
+#  define Q_OS_DRAGONFLY
+#  define Q_OS_BSD4
 #elif defined(__NetBSD__)
 #  define Q_OS_NETBSD
 #  define Q_OS_BSD4
