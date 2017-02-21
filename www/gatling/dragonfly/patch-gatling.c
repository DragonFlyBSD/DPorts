--- gatling.c.intermediate	2017-02-21 17:22:17 UTC
+++ gatling.c
@@ -1629,7 +1629,7 @@ int main(int argc,char* argv[],char* env
 
 #if !defined(__linux__)
   optind=1;
-#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
   optreset=1;
 #endif
 #endif
