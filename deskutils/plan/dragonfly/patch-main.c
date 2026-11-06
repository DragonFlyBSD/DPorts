--- main.c.orig	2026-11-06 02:57:57 UTC
+++ main.c
@@ -60,7 +60,7 @@ static void sig_callback	(XtPointer, XtSignalId *);
 #ifdef MIPS
 extern void exit		(int);
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 static void plan_exit		(int);
 #endif
 
@@ -122,7 +122,7 @@ int main(
 	char			*errmsg;
 	XGCValues		gcval;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	atexit((void *)plan_exit);
 #endif
 	interactive = FALSE;
@@ -678,7 +678,7 @@ static void usage(void)
  * not available everywhere so it's #ifdefed.
  */
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 void plan_exit(
 #else
 void exit(
@@ -695,7 +695,7 @@ void exit(
 		}
 	}
 	_exit(ret);
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 	exit(ret);
 #endif
 }
