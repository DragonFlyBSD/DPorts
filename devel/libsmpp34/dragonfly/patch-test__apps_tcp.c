--- test_apps/tcp.c.orig
+++ test_apps/tcp.c
@@ -41,7 +41,7 @@
     int ret = 0;
     int n = 1;
     struct hostent _host;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     struct hostent *__host_result;
 #endif
     struct in_addr addr;
@@ -64,7 +64,7 @@
         ret = -1; goto lb_tcp_connect_end;
     };
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     if( gethostbyname_r(h,&_host,ahost,sizeof(ahost),&__host_result,&n) != 0)
 #else /* solaris */
     if( gethostbyname_r(h,&_host,ahost,sizeof(ahost),&n) == NULL)
