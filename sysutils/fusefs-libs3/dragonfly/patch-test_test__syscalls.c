--- test/test_syscalls.c.orig	2019-04-16 18:46:20 UTC
+++ test/test_syscalls.c
@@ -956,7 +956,7 @@ static int test_create_unlink(void)
 	return 0;
 }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static int test_mknod(void)
 {
 	int err = 0;
@@ -1661,7 +1661,7 @@ fail:
 #undef PATH
 }
 
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 static int test_mkfifo(void)
 {
 	int res;
@@ -1833,7 +1833,7 @@ int main(int argc, char *argv[])
 	err += test_symlink();
 	err += test_link();
 	err += test_link2();
-#ifndef __FreeBSD__	
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	err += test_mknod();
 	err += test_mkfifo();
 #endif
