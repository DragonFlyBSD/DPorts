--- m4/p-procs.m4.orig	2020-01-24 09:42:54 UTC
+++ m4/p-procs.m4
@@ -10,6 +10,7 @@ AC_CANONICAL_HOST
 AC_MSG_CHECKING(whether system supports dynamic modules)
 AS_CASE([$host],
   [*linux*], [SUPPORTS_DYNAMIC_MODULES=yes],
+  [*dragonfly*], [SUPPORTS_DYNAMIC_MODULES=yes],
   [*freebsd*], [SUPPORTS_DYNAMIC_MODULES=yes],
   [*-sun-solaris2*], [SUPPORTS_DYNAMIC_MODULES=yes],
   [*-apple-darwin*], [SUPPORTS_DYNAMIC_MODULES=yes],
