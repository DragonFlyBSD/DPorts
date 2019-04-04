Use lib/ on DragonFly BSD x86_64
--- lib/autoconf/ax_boost_base.m4.orig	2018-08-22 20:13:48 UTC
+++ lib/autoconf/ax_boost_base.m4
@@ -112,7 +112,7 @@ AC_DEFUN([_AX_BOOST_BASE_RUNDETECT],[
     dnl The last entry in the list is chosen by default when no libraries
     dnl are found, e.g. when only header-only libraries are installed!
     AS_CASE([${host_cpu}],
-      [x86_64],[libsubdirs="lib64 libx32 lib lib64"],
+      [x86_64],[libsubdirs="lib"],
       [ppc64|s390x|sparc64|aarch64|ppc64le|riscv64],[libsubdirs="lib64 lib lib64"],
       [libsubdirs="lib"]
     )
