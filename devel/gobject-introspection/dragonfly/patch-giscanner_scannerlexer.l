Add missing TLS keyword - __thread (clang/gcc extension)

To unbreak scanner on headers like <sys/errno.h> and <runetype.h>:
/usr/include/runetype.h:94: syntax error, unexpected '{', expecting ',' or ';' in '{' at '{

--- giscanner/scannerlexer.l.orig	2018-01-22 07:01:39 UTC
+++ giscanner/scannerlexer.l
@@ -181,6 +181,7 @@ stringtext				([^\\\"])|(\\.)
 "__signed__"				{ return SIGNED; }
 "__restrict"				{ return RESTRICT; }
 "__restrict__"				{ return RESTRICT; }
+"__thread"				{ return THREAD_LOCAL; }
 "thread_local"				{ return THREAD_LOCAL; }
 "_Thread_local"				{ return THREAD_LOCAL; }
 "__typeof"				{ if (!parse_ignored_macro()) REJECT; }
