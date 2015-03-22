--- ipl/cfuncs/fpoll.c.orig	2009-10-27 20:39:16 UTC
+++ ipl/cfuncs/fpoll.c
@@ -37,7 +37,7 @@
 
 int fpoll(int argc, descriptor *argv)	/*: await data from file */
    {
-   FILE *f;
+   struct __FILE_public *f;
    int msec, r;
    fd_set fds;
    struct timeval tv, *tvp;
