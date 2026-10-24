--- src/Array.c.orig	2026-02-04 23:26:24 UTC
+++ src/Array.c
@@ -318,10 +318,11 @@ shvxs_array_return_sv_object(
             ST(0) = val;                                                \
             XSRETURN(1);                                                \
                                                                         \
-        case SHOULD_RETURN_COUNT:                                       \
+        case SHOULD_RETURN_COUNT: {                                     \
             I32 n = av_len(array) + 1;                                  \
             ST(0) = sv_2mortal(newSViv(n));                             \
             XSRETURN(1);                                                \
+        }                                                               \
                                                                         \
         case SHOULD_RETURN_ARRAY:                                       \
         case SHOULD_RETURN_ARRAYBLESS: {                                \
