--- src/porting.cpp.orig	2016-04-30 06:49:46 UTC
+++ src/porting.cpp
@@ -249,7 +249,7 @@ void initializePaths(char* argv0)
 	/*
 		OS X
 	*/
-	#elif defined(__APPLE__) || defined(__FreeBSD__)
+	#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 	const int info[4] = {CTL_KERN, KERN_PROC, KERN_PROC_PATHNAME, -1};
 	char* path = NULL;
@@ -386,7 +386,7 @@ void initializePaths(char* argv0)
 	path_userdata = std::string(getenv("HOME")) + "/Library/Application Support/" + PROJECT_NAME;
         path_configdata = std::string(getenv("HOME")) + "/Library/Application Support/" + PROJECT_NAME;
 
-	#elif defined(__FreeBSD__)
+	#elif defined(__FreeBSD__) || defined(__DragonFly__)
 
 	path_data = std::string(INSTALL_PREFIX) + "/share/" + PROJECT_NAME;
 
@@ -417,7 +417,7 @@ void initializePaths(char* argv0)
         dstream<<"path_configdata = "<<path_configdata<<std::endl;
 	dstream<<"path_userdata = "<<path_userdata<<std::endl;
 
-#if defined(__FreeBSD__) || defined(linux)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(linux)
 	#ifndef RUN_IN_PLACE
 	// Migrate to the new Directories
 	std::string path_olddirectory = std::string(getenv("HOME")) + "/." + PROJECT_NAME;
