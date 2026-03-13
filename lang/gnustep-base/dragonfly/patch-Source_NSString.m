--- Source/NSString.m.orig	Sun Jan  8 08:41:32 2023
+++ Source/NSString.m	Sat Nov
@@ -5120,7 +5120,7 @@ static NSFileManager *fm = nil;
 #else
 
 {
-  #if defined(__GLIBC__) || defined(__FreeBSD__)
+#if defined(__GLIBC__) || defined(__FreeBSD__) || defined(__DragonFly__)
   #define GS_MAXSYMLINKS sysconf(_SC_SYMLOOP_MAX)
   #else
   #define GS_MAXSYMLINKS MAXSYMLINKS
