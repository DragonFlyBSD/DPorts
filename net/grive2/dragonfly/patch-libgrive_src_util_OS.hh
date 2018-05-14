--- libgrive/src/util/OS.hh.intermediate	2018-05-14 15:50:57.000000000 +0300
+++ libgrive/src/util/OS.hh
@@ -24,7 +24,7 @@
 
 #include <string>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define off64_t off_t
 #endif
 
