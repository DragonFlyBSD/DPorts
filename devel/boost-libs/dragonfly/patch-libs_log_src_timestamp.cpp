--- libs/log/src/timestamp.cpp.orig	2019-04-09 19:35:55 UTC
+++ libs/log/src/timestamp.cpp
@@ -162,7 +162,7 @@ BOOST_LOG_API get_tick_count_t get_tick_
 #endif // BOOST_USE_WINAPI_VERSION >= BOOST_WINAPI_VERSION_WIN6
 
 #elif (defined(_POSIX_TIMERS) && (_POSIX_TIMERS+0) > 0)  /* POSIX timers supported */ \
-      || defined(__GNU__) || defined(__OpenBSD__) || defined(__CloudABI__)  /* GNU Hurd, OpenBSD and Nuxi CloudABI don't support POSIX timers fully but do provide clock_gettime() */
+      || defined(__GNU__) || defined(__DragonFly__) || defined(__OpenBSD__) || defined(__CloudABI__)  /* GNU Hurd, DragonFly, OpenBSD and Nuxi CloudABI don't support POSIX timers fully but do provide clock_gettime() */
 
 BOOST_LOG_API int64_t duration::milliseconds() const
 {
