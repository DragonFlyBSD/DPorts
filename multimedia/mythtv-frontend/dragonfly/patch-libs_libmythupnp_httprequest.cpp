--- libs/libmythupnp/httprequest.cpp.orig	2015-06-16 19:03:30.000000000 +0300
+++ libs/libmythupnp/httprequest.cpp
@@ -20,7 +20,7 @@
 #include <QDateTime>
 
 #include "mythconfig.h"
-#if !( CONFIG_DARWIN || CONFIG_CYGWIN || defined(__FreeBSD__) || defined(USING_MINGW))
+#if !( CONFIG_DARWIN || CONFIG_CYGWIN || defined(__FreeBSD__) || defined(__DragonFly__) || defined(USING_MINGW))
 #define USE_SETSOCKOPT
 #include <sys/sendfile.h>
 #endif
