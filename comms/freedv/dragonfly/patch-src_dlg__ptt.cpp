--- src/dlg_ptt.cpp.orig	2015-09-15 10:15:01.000000000 +0300
+++ src/dlg_ptt.cpp
@@ -25,7 +25,7 @@
 #ifdef __WIN32__
 #include <wx/msw/registry.h>
 #endif
-#if defined(__FreeBSD__) || defined(__WXOSX__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__WXOSX__)
 #include <glob.h>
 #include <string.h>
 #endif
@@ -291,9 +291,9 @@ void ComPortsDlg::populatePortList()
 #if defined(__WXGTK__) || defined(__WXOSX__)
     m_cbSerialPort->Clear();
     m_cbCtlDevicePath->Clear();
-#if defined(__FreeBSD__) || defined(__WXOSX__)
+#if defined(__DragonFly__) || defined(__FreeBSD__) || defined(__WXOSX__)
 	glob_t	gl;
-#ifdef __FreeBSD__
+#if defined(__DragonFly__) || defined(__FreeBSD__)
 	if(glob("/dev/tty*", GLOB_MARK, NULL, &gl)==0) {
 #else
 	if(glob("/dev/tty.*", GLOB_MARK, NULL, &gl)==0) {
