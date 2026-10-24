--- src/STEPConstruct/STEPConstruct_AP203Context.cxx.orig
+++ src/STEPConstruct/STEPConstruct_AP203Context.cxx
@@ -123,7 +123,7 @@
     long shift = 0;
     _get_timezone (&shift);
   #else
-    #if defined(__FreeBSD__)
+    #if defined(__FreeBSD__) || defined(__DragonFly__)
 	struct tm *lt;
 	time_t t = 0;
 	time(&t);
