--- src/java.base/unix/native/libjava/java_props_md.c.orig
+++ src/java.base/unix/native/libjava/java_props_md.c
@@ -416,6 +416,11 @@
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
