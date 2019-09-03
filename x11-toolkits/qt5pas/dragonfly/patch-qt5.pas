--- qt5.pas.orig	2018-01-10 22:56:59 UTC
+++ qt5.pas
@@ -38,7 +38,7 @@ const
     {$LINKFRAMEWORK Qt5Pas}
   {$ELSE}
     Qt5PasLib = 'libQt5Pas.so.1';
-    {$IF DEFINED(LINUX) or DEFINED(FREEBSD) or DEFINED(NETBSD)}
+    {$IF DEFINED(LINUX) or DEFINED(FREEBSD) or DEFINED(NETBSD) or DEFINED(DRAGONFLY)}
       {$DEFINE BINUX}
     {$ENDIF}
   {$ENDIF}
