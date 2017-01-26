--- lib/FXThread.cpp.orig	2016-01-07 03:46:26.000000000 +0200
+++ lib/FXThread.cpp
@@ -402,7 +402,7 @@ FXint FXThread::processors(){
     return result;
     }
   return 1;
-#elif defined(__APPLE__) || defined(__FreeBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
   int result=1;
   size_t len=sizeof(result);
   if(sysctlbyname("hw.ncpu",&result,&len,NULL,0)!=-1){
