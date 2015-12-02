--- cmake/Modules/FindGettextLib.cmake.orig	2015-12-02 10:48:25.000000000 +0200
+++ cmake/Modules/FindGettextLib.cmake
@@ -61,9 +61,9 @@
 		ENDIF()
 	ELSE(WIN32)
 		# *BSD variants require special linkage as they don't use glibc
-		IF(${CMAKE_SYSTEM_NAME} MATCHES "BSD")
+		IF(${CMAKE_SYSTEM_NAME} MATCHES "BSD|DragonFly")
 			SET(GETTEXT_LIBRARY "intl")
-		ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "BSD")
+		ENDIF(${CMAKE_SYSTEM_NAME} MATCHES "BSD|DragonFly")
 		SET(GETTEXT_FOUND TRUE)
 	ENDIF(WIN32)
 ENDIF()
