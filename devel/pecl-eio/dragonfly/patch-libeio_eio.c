--- libeio/eio.c.orig
+++ libeio/eio.c
@@ -210,7 +210,7 @@
   #define D_NAME(entp) entp->d_name
 
   /* POSIX_SOURCE is useless on bsd's, and XOPEN_SOURCE is unreliable there, too */
-  #if __FreeBSD__ || __NetBSD__ || __OpenBSD__
+  #if __FreeBSD__ || __NetBSD__ || __OpenBSD__ || __DragonFly__
     #define _DIRENT_HAVE_D_TYPE /* sigh */
     #define D_INO(de) (de)->d_fileno
     #define D_NAMLEN(de) (de)->d_namlen
@@ -248,7 +248,7 @@
 #if HAVE_SENDFILE
 # if __linux
 #  include <sys/sendfile.h>
-# elif __FreeBSD__ || defined __APPLE__
+# elif __FreeBSD__ || defined __APPLE__ || __DragonFly__
 #  include <sys/socket.h>
 #  include <sys/uio.h>
 # elif __hpux
@@ -1081,7 +1081,7 @@
       off_t soffset = offset;
       res = sendfile (ofd, ifd, &soffset, count);
 
-# elif __FreeBSD__
+# elif __FreeBSD__ || __DragonFly__
       /*
        * Of course, the freebsd sendfile is a dire hack with no thoughts
        * wasted on making it similar to other I/O functions.
