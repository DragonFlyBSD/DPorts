--- OrthancServer/UnitTestsSources/PluginsTests.cpp.orig	2022-10-29 17:00:59.693362000 +0200
+++ OrthancServer/UnitTestsSources/PluginsTests.cpp	2022-10-29 17:02:58.710749000 +0200
@@ -75,7 +75,7 @@
   //ASSERT_TRUE(l.GetFunction("_init") != NULL);
   //ASSERT_TRUE(l.HasFunction("_init"));
   
-#elif defined(__linux__) || defined(__FreeBSD_kernel__)
+#elif defined(__linux__) || defined(__FreeBSD_kernel__) || defined(__DragonFly__)
   /**
    * Since Orthanc 1.10.0, we test the "libdl.so.2" instead of the
    * "libdl.so", as discussed here:
@@ -125,7 +125,7 @@
   
   ASSERT_TRUE(0);
 
-#elif defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(_DragonFly__) 
   // dlopen() in FreeBSD/OpenBSD is supplied by libc, libc.so is
   // a ldscript, so we can't actually use it. Use thread
   // library instead - if it works - dlopen() is good.
