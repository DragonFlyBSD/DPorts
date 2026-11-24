--- lib/modding/CModVersion.h.orig
+++ lib/modding/CModVersion.h
@@ -10,7 +10,7 @@
 
 #pragma once
 
-#if defined(__UCLIBC__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__UCLIBC__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
 #undef major
 #undef minor
 #undef patch
