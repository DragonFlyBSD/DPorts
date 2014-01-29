--- config.in.h.orig	2013-12-27 22:01:48.000000000 +0000
+++ config.in.h
@@ -3239,8 +3239,6 @@ double tgamma (double);
 /* Define to `int' if <sys/types.h> doesn't define. */
 #undef gid_t
 
-/* Define to rpl_gmtime if the replacement function should be used. */
-#undef gmtime
 
 /* Define to `__inline__' or `__inline' if that's what the C compiler
    calls it, or to nothing if 'inline' is not supported under any name.  */
@@ -3265,8 +3263,6 @@ double tgamma (double);
 # define __GNUC_STDC_INLINE__ 1
 #endif
 
-/* Define to rpl_localtime if the replacement function should be used. */
-#undef localtime
 
 /* Define to a type if <wchar.h> does not define. */
 #undef mbstate_t
