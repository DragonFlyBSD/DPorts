--- src/Aflock.cpp.orig	2020-07-18 14:12:20 UTC
+++ src/Aflock.cpp
@@ -803,7 +803,7 @@ int Aflock::open_port( const char* const
 #ifndef __sgi
 # ifndef __sun
 #  ifndef MACOSX
-#   ifndef __FreeBSD__
+#   if !defined(__FreeBSD__) && !defined(__DragonFly__)
 #    ifndef __OpenBSD__
 #     ifndef AIX
 #      ifndef __hpux
