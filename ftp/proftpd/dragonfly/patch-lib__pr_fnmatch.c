--- lib/pr_fnmatch.c.orig	2012-04-24 19:19:01 UTC
+++ lib/pr_fnmatch.c
@@ -250,7 +250,7 @@
 # endif
 # define STRLEN(S) strlen (S)
 # define STRCAT(D, S) strcat (D, S)
-# define MEMPCPY(D, S, N) __mempcpy (D, S, N)
+# define MEMPCPY(D, S, N) mempcpy (D, S, N)
 # define MEMCHR(S, C, N) memchr (S, C, N)
 # define STRCOLL(S1, S2) strcoll (S1, S2)
 # include "pr_fnmatch_loop.c"
@@ -274,7 +274,7 @@
 #  define BTOWC(C)	(C)
 #  define STRLEN(S) __wcslen (S)
 #  define STRCAT(D, S) __wcscat (D, S)
-#  define MEMPCPY(D, S, N) __wmempcpy (D, S, N)
+#  define MEMPCPY(D, S, N) wmempcpy (D, S, N)
 #  define MEMCHR(S, C, N) wmemchr (S, C, N)
 #  define STRCOLL(S1, S2) wcscoll (S1, S2)
 #  define WIDE_CHAR_VERSION 1
