--- /ib/memory_mosq.h.orig	2016-06-03 00:20:22.000000000 +0300
+++ lib/memory_mosq.h
@@ -20,7 +20,7 @@ Contributors:
 #include <stdio.h>
 #include <sys/types.h>
 
-#if defined(WITH_MEMORY_TRACKING) && defined(WITH_BROKER) && !defined(WIN32) && !defined(__SYMBIAN32__) && !defined(__ANDROID__) && !defined(__UCLIBC__) && !defined(__OpenBSD__)
+#if defined(WITH_MEMORY_TRACKING) && defined(WITH_BROKER) && !defined(WIN32) && !defined(__SYMBIAN32__) && !defined(__ANDROID__) && !defined(__UCLIBC__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 #define REAL_WITH_MEMORY_TRACKING
 #endif
 
