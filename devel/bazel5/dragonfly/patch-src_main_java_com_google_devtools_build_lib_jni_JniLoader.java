--- src/main/java/com/google/devtools/build/lib/jni/JniLoader.java.orig	Tue Jan  1 00:00:00 1980
+++ src/main/java/com/google/devtools/build/lib/jni/JniLoader.java	Mon Mar
@@ -40,6 +40,7 @@ public final class JniLoader {
         case LINUX:
         case FREEBSD:
         case OPENBSD:
+        case DRAGONFLY:
         case UNKNOWN:
           loadLibrary("main/native/libunix_jni.so");
           break;
