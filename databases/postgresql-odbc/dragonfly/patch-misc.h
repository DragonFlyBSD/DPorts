Fix typo, utility compiled as ISO C11

--- misc.h.orig	2018-11-17 12:35:37 UTC
+++ misc.h
@@ -55,7 +55,7 @@ ssize_t			my_strcpy(char *dst, ssize_t d
 #define CHECK_NOT_CHAR_P(t) \
 _Pragma ("GCC diagnostic push") \
 _Pragma ("GCC diagnostic ignored \"-Wunused-variable\"") \
-	if (0) { typeof(t) dummy_for_check = {};} \
+	if (0) { __typeof__(t) dummy_for_check = {};} \
 _Pragma ("GCC diagnostic pop")
 #else
 #define	FUNCTION_BEGIN_MACRO
