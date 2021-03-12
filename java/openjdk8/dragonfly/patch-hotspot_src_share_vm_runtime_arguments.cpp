--- hotspot/src/share/vm/runtime/arguments.cpp.orig	2021-01-20 00:41:17 UTC
+++ hotspot/src/share/vm/runtime/arguments.cpp
@@ -1959,7 +1959,7 @@ jint Arguments::set_aggressive_heap_flag
     FLAG_SET_CMDLINE(uintx, MaxNewSize, NewSize);
   }
 
-#if defined(_ALLBSD_SOURCE) && !defined(__FreeBSD__)
+#if defined(_ALLBSD_SOURCE) && !defined(__FreeBSD__) && !defined(__DragonFly__)
   // UseLargePages is not yet supported on all BSD.
   FLAG_SET_DEFAULT(UseLargePages, true);
 #endif
@@ -4023,7 +4023,7 @@ jint Arguments::parse(const JavaVMInitAr
             hotspotrc, hotspotrc);
   }
 
-#if defined(_ALLBSD_SOURCE) && !defined(__FreeBSD__)
+#if defined(_ALLBSD_SOURCE) && !defined(__FreeBSD__) && !defined(__DragonFly__)
   // UseLargePages is not yet supported on all BSD.
   UNSUPPORTED_OPTION(UseLargePages, "-XX:+UseLargePages");
 #endif
