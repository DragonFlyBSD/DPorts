 Use default visibility for gettimeofday()

--- Source/cmSystemTools.cxx.orig	2020-10-06 12:28:17 UTC
+++ Source/cmSystemTools.cxx
@@ -1,6 +1,7 @@
 /* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
    file Copyright.txt or https://cmake.org/licensing for details.  */
 
+#ifndef __DragonFly__
 #if !defined(_WIN32) && !defined(__sun)
 // POSIX APIs are needed
 #  define _POSIX_C_SOURCE 200809L
@@ -9,6 +10,7 @@
 // For isascii
 #  define _XOPEN_SOURCE 700
 #endif
+#endif
 
 #include "cmSystemTools.h"
 
