--- xwin.c.intermediate	2019-09-05 08:19:37.000000000 +0000
+++ xwin.c
@@ -20,7 +20,7 @@
 #include <GL/gl.h>
 #include <GL/glu.h>
 #endif
-#if defined(DARWIN) || defined(FREEBSD)
+#if defined(DARWIN) || defined(FREEBSD) || defined(__DragonFly__)
 #else
 #include <malloc.h>
 #endif
@@ -1977,7 +1977,7 @@ typedef struct {
 		ptr_void_proc redraw;
                } WSTRU;
 
-#if defined(DARWIN) || defined(FREEBSD)
+#if defined(DARWIN) || defined(FREEBSD) || defined(__DragonFly__)
 static WSTRU WinObj[NOBJS];
 #else
 static WSTRU WinObj[NOBJS] = {{.win = NULL, .winup = NULL, .butarr = NULL, .win = NULL, .redraw = NULL}};
@@ -4220,7 +4220,7 @@ void makeRasterFont(Display *dpy);
 #include <fcntl.h>
 #if defined(__APPLE__)
 #include <copyfile.h>
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <sys/socket.h>
 #include <sys/uio.h>
@@ -4245,7 +4245,7 @@ int OSCopyFile(const char* source, const
 #if defined(__APPLE__)
     //fcopyfile works on FreeBSD and OS X 10.5+ 
     int result = fcopyfile(input, output, 0, COPYFILE_ALL);
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     off_t bytesCopied = 0;
     struct stat fileinfo = {0};
     fstat(input, &fileinfo);
