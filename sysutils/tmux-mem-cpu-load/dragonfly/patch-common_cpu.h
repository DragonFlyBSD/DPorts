--- common/cpu.h.orig	2016-08-02 22:51:47 UTC
+++ common/cpu.h
@@ -32,7 +32,7 @@
   #define CP_NICE   1
   #define CP_SYS    2
 
-  #if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
+  #if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
     // *BSD or OSX
     #define CP_INTR   3
     #define CP_IDLE   4
