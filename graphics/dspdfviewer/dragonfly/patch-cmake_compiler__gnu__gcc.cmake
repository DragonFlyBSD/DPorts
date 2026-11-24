--- cmake/compiler_gnu_gcc.cmake.orig
+++ cmake/compiler_gnu_gcc.cmake
@@ -2,12 +2,12 @@
 
 include(CheckCXXCompilerFlag)
 
-CHECK_CXX_COMPILER_FLAG("-std=c++11" C11FLAG)
+CHECK_CXX_COMPILER_FLAG("-std=c++17" C11FLAG)
 if(C11FLAG)
-	message(STATUS "Compiler supports -std=c++11, using it.")
-	add_definitions(-std=c++11)
+	message(STATUS "Compiler supports -std=c++17, using it.")
+	add_definitions(-std=c++17)
 else()
-	message(WARNING "Compiler does not support -std=c++11, trying c++0x")
+	message(WARNING "Compiler does not support -std=c++17, trying c++0x")
 	CHECK_CXX_COMPILER_FLAG("-std=c++0x" C0XFLAG)
 	if(C0XFLAG)
 		message(STATUS "Using -std=c++0x")
