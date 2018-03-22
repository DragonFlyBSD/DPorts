--- util/cmake/seqan-config.cmake.orig	2018-02-02 16:33:52 UTC
+++ util/cmake/seqan-config.cmake
@@ -310,7 +310,7 @@ if (UNIX AND NOT APPLE)
     set (CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--whole-archive -lpthread -Wl,--no-whole-archive")
 endif ()
 
-if ((${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD") OR (${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD"))
+if ((${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD") OR (${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly"))
   set (SEQAN_DEFINITIONS ${SEQAN_DEFINITIONS} "-D_GLIBCXX_USE_C99=1")
 endif ()
 
@@ -320,7 +320,7 @@ check_include_file_cxx(execinfo.h _SEQAN
 mark_as_advanced(_SEQAN_HAVE_EXECINFO)
 if (_SEQAN_HAVE_EXECINFO)
   set(SEQAN_DEFINITIONS ${SEQAN_DEFINITIONS} "-DSEQAN_HAS_EXECINFO=1")
-  if ((${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD") OR (${CMAKE_SYSTEM_NAME} STREQUAL "OpenBSD"))
+  if ((${CMAKE_SYSTEM_NAME} STREQUAL "FreeBSD") OR (${CMAKE_SYSTEM_NAME} STREQUAL "DragonFly"))
     set (SEQAN_LIBRARIES ${SEQAN_LIBRARIES} execinfo elf)
   endif ()
 else (_SEQAN_HAVE_EXECINFO)
