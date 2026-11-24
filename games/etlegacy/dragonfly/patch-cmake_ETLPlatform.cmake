--- cmake/ETLPlatform.cmake.orig
+++ cmake/ETLPlatform.cmake
@@ -100,7 +100,7 @@
 		# backtrace() lives in libexecinfo on the BSDs, not libc
 		target_link_libraries(os_libraries INTERFACE m pthread execinfo)
 		set(LIB_SUFFIX ".mp.obsd.")
-	elseif(CMAKE_SYSTEM MATCHES "FreeBSD")
+	elseif(CMAKE_SYSTEM MATCHES "FreeBSD|DragonFly")
 		target_link_libraries(os_libraries INTERFACE m pthread execinfo)
 		set(LIB_SUFFIX ".mp.fbsd.")
 	elseif(CMAKE_SYSTEM MATCHES "NetBSD")
