--- pskctool/gl/intprops.h.orig	2016-08-27 11:15:06.000000000 +0000
+++ pskctool/gl/intprops.h
@@ -230,11 +230,11 @@ verify (TYPE_MAXIMUM (long long int) ==
    (e.g., A and B) have the same type as MIN and MAX.  Instead, they assume
    that the result (e.g., A + B) has that type.  */
 #if _GL_HAS_BUILTIN_OVERFLOW_WITH_NULL
-# define _GL_ADD_OVERFLOW(a, b, min, max)
+# define _GL_ADD_OVERFLOW(a, b, min, max)	\
    __builtin_add_overflow (a, b, (__typeof__ ((a) + (b)) *) 0)
-# define _GL_SUBTRACT_OVERFLOW(a, b, min, max)
+# define _GL_SUBTRACT_OVERFLOW(a, b, min, max)	\
    __builtin_sub_overflow (a, b, (__typeof__ ((a) - (b)) *) 0)
-# define _GL_MULTIPLY_OVERFLOW(a, b, min, max)
+# define _GL_MULTIPLY_OVERFLOW(a, b, min, max)	\
    __builtin_mul_overflow (a, b, (__typeof__ ((a) * (b)) *) 0)
 #else
 # define _GL_ADD_OVERFLOW(a, b, min, max)                                \
