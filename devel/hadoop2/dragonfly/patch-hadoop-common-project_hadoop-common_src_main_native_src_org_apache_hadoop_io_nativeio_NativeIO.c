--- hadoop-common-project/hadoop-common/src/main/native/src/org/apache/hadoop/io/nativeio/NativeIO.c.orig	2016-01-26 00:07:35 UTC
+++ hadoop-common-project/hadoop-common/src/main/native/src/org/apache/hadoop/io/nativeio/NativeIO.c
@@ -36,7 +36,7 @@
 #include <sys/resource.h>
 #include <sys/stat.h>
 #include <sys/syscall.h>
-#if !(defined(__FreeBSD__) || defined(__MACH__))
+#if !(defined(__FreeBSD__) || defined(__MACH__) || defined __DragonFly__)
 #include <sys/sendfile.h>
 #endif
 #include <sys/time.h>
@@ -346,7 +346,7 @@ Java_org_apache_hadoop_io_nativeio_Nativ
 
   int err = 0;
   if ((err = posix_fadvise(fd, (off_t)offset, (off_t)len, map_fadvise_flag(flags)))) {
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
     throw_ioe(env, errno);
 #else
     throw_ioe(env, err);
@@ -448,7 +448,7 @@ Java_org_apache_hadoop_io_nativeio_Nativ
 #endif
 }
 
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 static int toFreeBSDFlags(int flags)
 {
   int rc = flags & 03;
@@ -479,7 +479,7 @@ Java_org_apache_hadoop_io_nativeio_Nativ
   jint flags, jint mode)
 {
 #ifdef UNIX
-#ifdef __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
   flags = toFreeBSDFlags(flags);
 #endif
   jobject ret = NULL;
