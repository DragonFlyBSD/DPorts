--- src/chart1.cpp.orig	2026-11-06 07:34:33 UTC
+++ src/chart1.cpp
@@ -10456,7 +10456,7 @@ int paternFilter (const struct dirent * dir) {
 
 int isTTYreal(const char *dev)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
  	            wxLogMessage( _T("FreeBSD") );
     if (strncmp("/dev/tty0", dev, 9) == 0)
 	return 1;
@@ -10466,7 +10466,7 @@ int isTTYreal(const char *dev)
 	return 1;
     return 0;
 #else
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     struct termios termAttr;
 #else
     struct serial_struct serinfo;
@@ -10477,7 +10477,7 @@ int isTTYreal(const char *dev)
 
     // device name is pointing to a real device
     if(fd >= 0) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         if (tcgetattr(fd, &termAttr) == 0) {
 #else
         if (ioctl(fd, TIOCGSERIAL, &serinfo)==0) {
@@ -10534,7 +10534,7 @@ wxArrayString *EnumerateSerialPorts( void )
 
     //Initialize the pattern table
     if( devPatern[0] == NULL ) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         paternAdd ( "ttyU" );
         paternAdd ( "ttyu" );
         paternAdd ( "ttyd" );
