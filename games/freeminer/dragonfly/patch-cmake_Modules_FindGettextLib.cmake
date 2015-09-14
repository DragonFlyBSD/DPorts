--- cmake/Modules/FindGettextLib.cmake.orig	2014-11-24 19:24:31.000000000 +0200
+++ cmake/Modules/FindGettextLib.cmake
@@ -63,13 +63,13 @@ IF(GETTEXT_INCLUDE_DIR AND GETTEXT_MSGFM
 		ENDIF()
 	ELSE(WIN32)
 		# *BSD variants require special linkage as they don't use glibc
-		IF(${CMAKE_SYSTEM_NAME} MATCHES "BSD")
+		IF(${CMAKE_SYSTEM_NAME} MATCHES "BSD|DragonFly")
 			FIND_LIBRARY(GETTEXT_LIBRARY NAMES intl
 				PATHS
 				/usr/local/lib
 				/usr/lib
 			)
-		ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "BSD")
+		ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "BSD|DragonFly")
 		SET(GETTEXT_FOUND TRUE)
 	ENDIF(WIN32)
 ENDIF()
