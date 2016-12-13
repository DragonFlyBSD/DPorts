No push, lets try to reduce deprecated support in this.
Keep NEEDS just in case.

--- boost/system/config.hpp.orig	2016-09-21 17:33:27.000000000 +0300
+++ boost/system/config.hpp
@@ -10,6 +10,12 @@
 #ifndef BOOST_SYSTEM_CONFIG_HPP                  
 #define BOOST_SYSTEM_CONFIG_HPP
 
+#if defined(__DragonFly__) && !defined(BOOST_SYSTEM_NEEDS_DEPRECATED)
+#ifndef BOOST_SYSTEM_NO_DEPRECATED
+#define	BOOST_SYSTEM_NO_DEPRECATED
+#endif
+#endif
+
 #include <boost/config.hpp>
 #include <boost/predef/platform.h>
 #include <boost/system/api_config.hpp>  // for BOOST_POSIX_API or BOOST_WINDOWS_API
