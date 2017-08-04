--- lib/pr_fnmatch.c.orig	2017-04-10 02:31:02 UTC
+++ lib/pr_fnmatch.c
@@ -278,7 +278,7 @@ __wcschrnul (const wchar_t *s, wint_t c)
 #  define BTOWC(C)	(C)
 #  define STRLEN(S) __wcslen (S)
 #  define STRCAT(D, S) __wcscat (D, S)
-#  define MEMPCPY(D, S, N) __wmempcpy (D, S, N)
+#  define MEMPCPY(D, S, N) wmempcpy (D, S, N)
 #  define MEMCHR(S, C, N) wmemchr (S, C, N)
 #  define STRCOLL(S1, S2) wcscoll (S1, S2)
 #  define WIDE_CHAR_VERSION 1
