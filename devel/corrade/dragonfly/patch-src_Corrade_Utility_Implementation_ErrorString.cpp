--- src/Corrade/Utility/Implementation/ErrorString.cpp.orig
+++ src/Corrade/Utility/Implementation/ErrorString.cpp
@@ -62,7 +62,7 @@
        the buffer. Sigh. */
     /** @todo might want to add CORRADE_TARGET_BSD covering all three variants,
         there's no overarching BSD define present on all BSDs :( */
-    #if ((_POSIX_C_SOURCE >= 200112L) && !_GNU_SOURCE) || defined(CORRADE_TARGET_EMSCRIPTEN) || defined(CORRADE_TARGET_APPLE) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+    #if ((_POSIX_C_SOURCE >= 200112L) && !_GNU_SOURCE) || defined(CORRADE_TARGET_EMSCRIPTEN) || defined(CORRADE_TARGET_APPLE) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
     char string[256];
     CORRADE_INTERNAL_ASSERT_OUTPUT(strerror_r(error, string, Containers::arraySize(string)) == 0);
     #else
