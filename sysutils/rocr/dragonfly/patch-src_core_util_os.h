--- src/core/util/os.h.orig	2018-11-19 03:01:00 UTC
+++ src/core/util/os.h
@@ -54,7 +54,7 @@ typedef void* Mutex;
 typedef void* Thread;
 typedef void* EventHandle;
 
-enum class os_t { OS_WIN = 0, OS_LINUX, OS_FREEBSD, COUNT };
+enum class os_t { OS_WIN = 0, OS_LINUX, OS_FREEBSD, OS_DRAGONFLY, COUNT };
 static __forceinline std::underlying_type<os_t>::type os_index(os_t val) {
   return std::underlying_type<os_t>::type(val);
 }
@@ -65,6 +65,8 @@ static const os_t current_os = os_t::OS_
 static const os_t current_os = os_t::OS_LINUX;
 #elif __FreeBSD__
 static const os_t current_os = os_t::OS_FREEBSD;
+#elif __DragonFly__
+static const os_t current_os = os_t::OS_DRAGONFLY;
 #else
 static_assert(false, "Operating System not detected!");
 #endif
