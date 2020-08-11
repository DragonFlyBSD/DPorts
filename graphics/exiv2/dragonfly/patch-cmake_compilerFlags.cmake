--- cmake/compilerFlags.cmake.intermediate	2020-08-11 14:58:36 UTC
+++ cmake/compilerFlags.cmake
@@ -27,7 +27,7 @@ if ( MINGW OR UNIX OR MSYS ) # MINGW, Li
         if (NOT (MINGW OR CMAKE_HOST_SOLARIS OR CYGWIN OR MSYS) )
             if (COMPILER_IS_GCC AND CMAKE_CXX_COMPILER_VERSION VERSION_GREATER_EQUAL 8.0)
 		if (NOT (${CMAKE_SYSTEM_PROCESSOR} MATCHES "arm" OR ${CMAKE_SYSTEM_PROCESSOR} MATCHES "powerpc"))
-			add_compile_options(-fstack-clash-protection -fcf-protection)
+			add_compile_options(-fstack-clash-protection)
 		else()
 			add_compile_options(-fstack-clash-protection)
 		endif()
