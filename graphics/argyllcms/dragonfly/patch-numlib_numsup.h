--- numlib/numsup.h.orig	2014-01-31 04:08:43 UTC
+++ numlib/numsup.h
@@ -67,7 +67,7 @@
 #define CF64PREC "LL"
 
 #ifndef ATTRIBUTE_NORETURN
-# define ATTRIBUTE_NORETURN __declspec(noreturn)
+#define ATTRIBUTE_NORETURN __attribute__((noreturn))
 #endif
 
 #else  /* !__STDC_VERSION__ */
