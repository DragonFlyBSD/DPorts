--- openfx/HostSupport/include/ofxhBinary.h.orig	2018-04-25 16:03:37.000000000 +0000
+++ openfx/HostSupport/include/ofxhBinary.h
@@ -36,7 +36,7 @@ SOFTWARE, EVEN IF ADVISED OF THE POSSIBI
 #ifndef WINDOWS
 #define WINDOWS
 #endif
-#elif defined(__linux__) || defined(__FreeBSD__) || defined( __APPLE__) || defined(unix) || defined(__unix) || defined(_XOPEN_SOURCE) || defined(_POSIX_SOURCE)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFLy__)  || defined( __APPLE__) || defined(unix) || defined(__unix) || defined(_XOPEN_SOURCE) || defined(_POSIX_SOURCE)
 #define UNIX
 #else
 #error cannot detect operating system
