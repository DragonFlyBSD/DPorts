--- src/main.cpp.orig	2016-04-30 06:49:46 UTC
+++ src/main.cpp
@@ -825,7 +825,7 @@ int main(int argc, char *argv[])
 	// Create user data directory
 	fs::CreateDir(porting::path_userdata);
         
-#if defined(__FreeBSD__) || defined(linux)
+#if defined(__FreeBSD__) || defined(linux) || defined(__DragonFly__)
 	// Create user config directory
         fs::CreateDir(porting::path_configdata);
 #endif
