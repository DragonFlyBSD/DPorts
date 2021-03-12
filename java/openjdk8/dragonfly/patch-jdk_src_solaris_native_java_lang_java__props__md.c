--- jdk/src/solaris/native/java/lang/java_props_md.c.orig	2014-07-09 03:21:46.123357000 +0000
+++ jdk/src/solaris/native/java/lang/java_props_md.c	2014-07-10 02:55:44.473661000 +0000
@@ -111,7 +111,7 @@ static int ParseLocale(JNIEnv* env, int
     lc = setlocale(cat, NULL);
 #endif
 
-#if !defined(__linux__) && !defined(__FreeBSD__)
+#if !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
     if (lc == NULL) {
         return 0;
     }
@@ -499,6 +499,11 @@ GetJavaProperties(JNIEnv *env)
     {
 #ifdef MACOSX
         setOSNameAndVersion(&sprops);
+#elif defined __DragonFly__
+        struct utsname name;
+        uname(&name);
+        sprops.os_name = "DragonFlyBSD";
+        sprops.os_version = strdup(name.release);
 #else
         struct utsname name;
         uname(&name);
