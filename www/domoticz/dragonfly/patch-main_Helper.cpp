--- main/Helper.cpp.orig	2019-05-10 09:37:55 UTC
+++ main/Helper.cpp
@@ -42,8 +42,8 @@
 #include <time.h>
 #endif
 
-#if defined(__FreeBSD__) 
-// Check if OpenBSD or DragonFly need that at well?
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+// Check if OpenBSD or DragonFly need that at well? DragonFly - yes.
 #include <pthread_np.h>
 #ifndef PTHREAD_MAX_MAMELEN_NP
 #define PTHREAD_MAX_NAMELEN_NP 32 	// Arbitrary
@@ -247,7 +247,7 @@ std::vector<std::string> GetSerialPorts(
 				bUseDirectPath = true;
 				ret.push_back("/dev/" + fname);
 			}
-#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__NetBSD__)
+#if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__NetBSD__) || defined(__DragonFly__)
 			else if (fname.find("ttyU")!=std::string::npos)
 			{
 				bUseDirectPath=true;
@@ -1180,13 +1180,13 @@ int SetThreadName(const std::thread::nat
 	strncpy(name_trunc, name, sizeof(name_trunc));
 	name_trunc[sizeof(name_trunc)-1] = '\0';
 	return pthread_setname_np(thread, "%s", (void *)name_trunc);
-#elif defined(__OpenBSD__) || defined(__DragonFly__)
+#elif defined(__OpenBSD__)
 	char name_trunc[PTHREAD_MAX_NAMELEN_NP];
 	strncpy(name_trunc, name, sizeof(name_trunc));
 	name_trunc[sizeof(name_trunc)-1] = '\0';
 	pthread_setname_np(thread, name_trunc);
 	return 0;
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 	char name_trunc[PTHREAD_MAX_NAMELEN_NP];
 	strncpy(name_trunc, name, sizeof(name_trunc));
 	name_trunc[sizeof(name_trunc)-1] = '\0';
