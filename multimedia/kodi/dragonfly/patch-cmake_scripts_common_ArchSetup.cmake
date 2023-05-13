--- cmake/scripts/common/ArchSetup.cmake.orig	2023-03-11 22:16:38 UTC
+++ cmake/scripts/common/ArchSetup.cmake
@@ -160,7 +160,6 @@ if(NOT MSVC)
   # these options affect all code built by cmake including external projects.
   add_options(ALL_LANGUAGES ALL_BUILDS
     -Wall
-    -Wdouble-promotion
     -Wmissing-field-initializers
     -Wsign-compare
     -Wextra
@@ -190,7 +189,6 @@ if(NOT MSVC)
   # these options affect only core code
   if(NOT CORE_COMPILE_OPTIONS)
     set(CORE_COMPILE_OPTIONS
-      -Werror=double-promotion
       -Werror=missing-field-initializers
       -Werror=sign-compare
     )
