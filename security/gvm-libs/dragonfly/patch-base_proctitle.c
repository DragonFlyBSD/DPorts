--- base/proctitle.c.orig	2021-02-01 15:20:11 UTC
+++ base/proctitle.c
@@ -33,7 +33,7 @@
  * @brief Access to the executable's name.
  */
 extern const char *__progname;
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 extern const char *__progname_full;
 #endif
 static int argv_len;
@@ -52,7 +52,7 @@ proctitle_init (int argc, char **argv)
 {
   int i = 0;
   char **envp = environ;
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
   char *new_progname, *new_progname_full;
 #else
   char *new_progname;
@@ -62,7 +62,7 @@ proctitle_init (int argc, char **argv)
     return;
 
   new_progname = strdup (__progname);
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
   new_progname_full = strdup (__progname_full);
 #endif
 
@@ -86,7 +86,7 @@ proctitle_init (int argc, char **argv)
   /* Seems like these are in the moved environment, so reset them.  Idea from
    * proctitle.cpp in KDE libs.  */
   __progname = new_progname;
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
   __progname_full = new_progname_full;
 #endif
 }
