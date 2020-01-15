--- src/java.base/unix/native/libjava/java_props_md.c.orig	2019-10-16 18:31:09 UTC
+++ src/java.base/unix/native/libjava/java_props_md.c
@@ -440,6 +440,11 @@ GetJavaProperties(JNIEnv *env)
     {
 #ifdef MACOSX
         setOSNameAndVersion(&sprops);
+#elif defined __DragonFly__
+	struct utsname name;
+	uname(&name);
+	sprops.os_name = "DragonFlyBSD";
+	sprops.os_version = strdup(name.release);
 #else
         struct utsname name;
         uname(&name);
