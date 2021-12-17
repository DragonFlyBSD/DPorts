--- lcl/interfaces/qt5/cbindings/qt5.pas.orig	2021-08-20 16:54:50 UTC
+++ lcl/interfaces/qt5/cbindings/qt5.pas
@@ -38,7 +38,7 @@ const
     {$LINKFRAMEWORK Qt5Pas}
   {$ELSE}
     Qt5PasLib = 'libQt5Pas.so.1';
-    {$IF DEFINED(LINUX) or DEFINED(FREEBSD) or DEFINED(NETBSD)}
+    {$IF DEFINED(LINUX) or DEFINED(FREEBSD) or DEFINED(NETBSD) or DEFINED(DRAGONFLY)}
       {$DEFINE BINUX}
     {$ENDIF}
   {$ENDIF}
