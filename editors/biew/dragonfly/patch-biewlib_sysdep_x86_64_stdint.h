--- biewlib/sysdep/x86_64/stdint.h.orig	2009-09-20 13:44:59 UTC
+++ biewlib/sysdep/x86_64/stdint.h
@@ -113,7 +113,7 @@ typedef unsigned long long int	tUIntMax;
 
 /** The ISO C 9X standard specifies that in C++ implementations these
    macros should only be defined if explicitly requested.  */
-#if !defined __cplusplus || defined __STDC_LIMIT_MACROS
+#if (!defined __cplusplus || defined __STDC_LIMIT_MACROS) && !defined(__DragonFly__)
 
 #ifdef __GNUC__
 #define __INT64_C(c)	c ## LL
