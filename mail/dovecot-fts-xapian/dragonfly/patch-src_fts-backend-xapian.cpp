--- src/fts-backend-xapian.cpp.orig
+++ src/fts-backend-xapian.cpp
@@ -18,7 +18,7 @@
 #include <unicode/unistr.h>
 #include <unicode/translit.h> 
 #include <sys/time.h>
-#if defined(__FreeBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__)
 #include <sys/vmmeter.h>
 #endif
 
