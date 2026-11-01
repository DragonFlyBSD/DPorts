--- opennurbs_uuid.cpp.orig
+++ opennurbs_uuid.cpp
@@ -221,7 +221,7 @@
   return true;
 #else
 
-#if defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__)
+#if defined(ON_RUNTIME_LINUX) || defined(ON_RUNTIME_WASM) || defined(__FreeBSD__) || defined(__DragonFly__)
   uuid_generate((unsigned char*)&new_uuid);
   return true;
 #else
