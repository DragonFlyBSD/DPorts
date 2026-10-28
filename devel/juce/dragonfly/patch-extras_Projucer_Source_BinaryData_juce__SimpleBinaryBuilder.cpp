--- extras/Projucer/Source/BinaryData/juce_SimpleBinaryBuilder.cpp.orig
+++ extras/Projucer/Source/BinaryData/juce_SimpleBinaryBuilder.cpp
@@ -90,7 +90,7 @@
 
     static bool isDirectory (const std::string& path)
     {
-       #if defined (__FreeBSD__) || defined (__OpenBSD__)
+       #if defined (__FreeBSD__) || defined (__OpenBSD__) || defined (__DragonFly__)
         #define JUCE_STAT stat
        #else
         #define JUCE_STAT stat64
