--- src/celengine/astro.cpp.orig	2011-06-05 16:11:09 UTC
+++ src/celengine/astro.cpp
@@ -522,7 +522,7 @@ const char* astro::Date::toCStr(Format format) const
     cal_time.tm_sec = (int)seconds;
     cal_time.tm_wday = wday;
     cal_time.tm_gmtoff = utc_offset;
-#if defined(TARGET_OS_MAC) || defined(__FreeBSD__)
+#if defined(TARGET_OS_MAC) || defined(__FreeBSD__) || defined(__DragonFly__)
     // tm_zone is a non-const string field on the Mac and FreeBSD (why?)
     cal_time.tm_zone = const_cast<char*>(tzname.c_str());
 #else
