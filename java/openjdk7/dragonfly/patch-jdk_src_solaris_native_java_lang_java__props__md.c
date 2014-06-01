--- jdk/src/solaris/native/java/lang/java_props_md.c.intermediate	2014-05-31 16:25:50.518790000 +0000
+++ jdk/src/solaris/native/java/lang/java_props_md.c
@@ -457,6 +457,11 @@ GetJavaProperties(JNIEnv *env)
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
