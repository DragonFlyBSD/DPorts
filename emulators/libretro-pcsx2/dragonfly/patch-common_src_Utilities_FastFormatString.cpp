--- common/src/Utilities/FastFormatString.cpp.orig	2020-10-29 23:31:05 UTC
+++ common/src/Utilities/FastFormatString.cpp
@@ -34,7 +34,7 @@ template class SafeAlignedArray<u8, 16>;
 static const int MaxFormattedStringLength = 0x80000;
 
 static
-#ifndef __linux__
+#if !defined(__linux__) && !defined(__DragonFly__)
     __ri
 #endif
     void
@@ -75,7 +75,7 @@ static
 
 // returns the length of the formatted string, in characters (wxChars).
 static
-#ifndef __linux__
+#if !defined(__linux__) && !defined(__DragonFly__)
     __ri
 #endif
         uint
