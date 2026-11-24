--- thirdparty/RGFW.h.orig
+++ thirdparty/RGFW.h
@@ -2911,7 +2911,7 @@
 
     RGFW_monitors monitors;
 
-    #if defined(__linux__) || defined(__FreeBSD__)
+    #if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	    int eventWait_forceStop[3];
     #endif
 
