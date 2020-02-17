--- src/sysvinit.c.orig	2019-06-24 08:54:28 UTC
+++ src/sysvinit.c
@@ -82,6 +82,10 @@ console_open (int mode)
   return -1;
 }
 
+#ifndef CBAUD
+# define CBAUD 0
+#endif
+
 #ifndef CBAUDEX
 # define CBAUDEX 0
 #endif
@@ -669,9 +673,11 @@ sysvinit_sigtrans (int sig, int *pact)
       /* Ignore these signals. */
       *pact = ACTION_CONT;
       break;
+#ifdef SIGPWR
     case SIGPWR:
       *pact = ACTION_POWER;
       break;
+#endif
     default:
       return 0;
     }
@@ -788,7 +794,9 @@ sysvinit_begin (void)
 {
   int sigv[] = {
     SIGINT,
+#ifdef SIGPWR
     SIGPWR,
+#endif
     SIGWINCH,
   };
 
