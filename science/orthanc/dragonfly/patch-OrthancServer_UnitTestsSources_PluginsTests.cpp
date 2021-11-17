--- OrthancServer/UnitTestsSources/PluginsTests.cpp.orig	2021-11-14 16:54:51.895843000 +0100
+++ OrthancServer/UnitTestsSources/PluginsTests.cpp	2021-11-14 16:55:27.795044000 +0100
@@ -85,14 +85,14 @@
   //ASSERT_TRUE(l.GetFunction("_init") != NULL);
   //ASSERT_TRUE(l.HasFunction("_init"));
   
-#elif defined(__linux__) || defined(__FreeBSD_kernel__)
+#elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
   SharedLibrary l("libdl.so");
   ASSERT_THROW(l.GetFunction("world"), OrthancException);
   ASSERT_TRUE(l.GetFunction("dlopen") != NULL);
   ASSERT_TRUE(l.HasFunction("dlclose"));
   ASSERT_FALSE(l.HasFunction("world"));
 
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
   // dlopen() in FreeBSD/OpenBSD is supplied by libc, libc.so is
   // a ldscript, so we can't actually use it. Use thread
   // library instead - if it works - dlopen() is good.
