--- src/java.base/unix/native/libjava/java_props_md.c.orig	2020-07-16 04:03:40 UTC
+++ src/java.base/unix/native/libjava/java_props_md.c
@@ -422,6 +422,11 @@ GetJavaProperties(JNIEnv *env)
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
