--- src/corelib/global/qsystemdetection.h.orig	2022-11-16 07:54:24 UTC
+++ src/corelib/global/qsystemdetection.h
@@ -23,6 +23,7 @@
      HPUX     - HP-UX
      LINUX    - Linux [has variants]
      FREEBSD  - FreeBSD [has variants]
+     DRAGONFLY- DragonFly BSD
      NETBSD   - NetBSD
      OPENBSD  - OpenBSD
      INTERIX  - Interix
@@ -98,12 +99,15 @@
 #  define Q_OS_WASM
 #elif defined(__linux__) || defined(__linux)
 #  define Q_OS_LINUX
-#elif defined(__FreeBSD__) || defined(__DragonFly__) || defined(__FreeBSD_kernel__)
+#elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
 #  ifndef __FreeBSD_kernel__
 #    define Q_OS_FREEBSD
 #  endif
 #  define Q_OS_FREEBSD_KERNEL
 #  define Q_OS_BSD4
+#elif defined(__DragonFly__)
+#  define Q_OS_DRAGONFLY
+#  define Q_OS_BSD4
 #elif defined(__NetBSD__)
 #  define Q_OS_NETBSD
 #  define Q_OS_BSD4
