--- iozone.c.orig	2013-07-09 01:12:12.000000000 +0300
+++ iozone.c
@@ -301,7 +301,7 @@ THISVERSION,
 #endif
 #endif
 
-#if defined (__FreeBSD__) || defined(__DSragonFly__)
+#if defined (__FreeBSD__) || defined(__DragonFly__)
 #ifndef O_RSYNC
 #define O_RSYNC O_FSYNC
 #endif
@@ -1824,7 +1824,7 @@ char **argv;
 			break;
 #endif
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined(__FreeBSD__) || defined(solaris)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(solaris)
 			direct_flag++;
 			sprintf(splash[splash_line++],"\tO_DIRECT feature enabled\n");
 			break;
@@ -7383,7 +7383,7 @@ long long *data2;
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		file_flags |=O_DIRECT;
 #endif
@@ -8386,7 +8386,7 @@ long long *data1,*data2;
 		open_flags |=O_RSYNC|O_SYNC;
 #endif
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		open_flags |=O_DIRECT;
 #endif
@@ -8940,7 +8940,7 @@ long long *data1, *data2;
 	}
 	flags = O_RDWR;
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -9416,7 +9416,7 @@ long long *data1,*data2;
 	maddr=wmaddr=0;
 	open_flags=O_RDONLY;
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		open_flags |=O_DIRECT;
 #endif
@@ -9715,7 +9715,7 @@ long long *data1,*data2;
 /*	flags = O_RDWR|O_CREAT|O_TRUNC;*/
 	flags = O_RDWR|O_CREAT;
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -10036,7 +10036,7 @@ long long *data1, *data2;
 	nbuff=maddr=wmaddr=0;
 	open_flags=O_RDONLY;
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		open_flags |=O_DIRECT;
 #endif
@@ -10379,7 +10379,7 @@ long long *data1,*data2;
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags_here |=O_DIRECT;
 #endif
@@ -10632,7 +10632,7 @@ long long *data1, *data2;
 	nbuff=mainbuffer;
 	open_flags=O_RDONLY;
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		open_flags |=O_DIRECT;
 #endif
@@ -10897,7 +10897,7 @@ long long *data1,*data2;
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags_here |=O_DIRECT;
 #endif
@@ -11223,7 +11223,7 @@ long long *data1,*data2;
 
 	open_flags=O_RDONLY;
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		open_flags |=O_DIRECT;
 #endif
@@ -12567,7 +12567,7 @@ thread_write_test( x)
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -13269,7 +13269,7 @@ thread_pwrite_test( x)
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -13886,7 +13886,7 @@ thread_rwrite_test(x)
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -14455,7 +14455,7 @@ thread_read_test(x)
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -15033,7 +15033,7 @@ thread_pread_test(x)
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -15587,7 +15587,7 @@ thread_rread_test(x)
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -16155,7 +16155,7 @@ thread_reverse_read_test(x)
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -16690,7 +16690,7 @@ thread_stride_read_test(x)
 		flags |=O_RSYNC|O_SYNC;
 #endif
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -17348,7 +17348,7 @@ thread_ranread_test(x)
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -18003,7 +18003,7 @@ thread_ranwrite_test( x)
 #endif
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 	if(direct_flag)
 		flags |=O_DIRECT;
 #endif
@@ -18974,7 +18974,7 @@ int flag, prot;
 	 	file_flags=fcntl(fd,F_GETFL);
 
 #if ! defined(DONT_HAVE_O_DIRECT)
-#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__)
+#if defined(linux) || defined(__AIX__) || defined(IRIX) || defined(IRIX64) || defined(Windows) || defined (__FreeBSD__) || defined(__DragonFly__)
 		dflag = O_DIRECT;
 #endif
 #if defined(TRU64)
