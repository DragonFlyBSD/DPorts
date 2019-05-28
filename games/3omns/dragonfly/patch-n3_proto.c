--- n3/proto.c.orig	2016-07-03 20:43:13 UTC
+++ n3/proto.c
@@ -31,7 +31,7 @@
 #include <unistd.h> // For _POSIX_TIMERS.
 
 
-#if(_POSIX_TIMERS <= 0)
+#if(_POSIX_TIMERS <= 0) && !defined(__DragonFly__)
 #error no POSIX timers :(
 #endif
 
