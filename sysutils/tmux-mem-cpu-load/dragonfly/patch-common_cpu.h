--- common/cpu.h.orig
+++ common/cpu.h
@@ -36,7 +36,7 @@
   #define CP_NICE   1
   #define CP_SYS    2
 
-  #if defined(__FreeBSD__) || defined(__NetBSD__)
+  #if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
     // *BSD or OSX
     #define CP_INTR   3
     #define CP_IDLE   4
