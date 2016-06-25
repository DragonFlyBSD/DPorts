--- src/bin/input.c.intermediate	2016-06-24 18:44:36.000000000 +0300
+++ src/bin/input.c
@@ -28,9 +28,7 @@ input(int *cmd)
 {
 #define MAXLINE 80
 	static EditLine	*el = NULL;
-	#if __FreeBSD_version >= 500000
 	HistEvent he;
-	#endif
 	static History	*hist = NULL;
 	const char	*bp = NULL;
 	static char	buf[MAXLINE];
@@ -42,15 +40,11 @@ input(int *cmd)
 		if (verbose) {
 			if (!el) {
 				el = el_init("ufmcontrol", stdin, stdout
-				#if __FreeBSD_version >= 500000
 					 , stderr
-				#endif
 				);
 				hist = history_init();
 				history(hist,
-				#if __FreeBSD_version >= 500000
 					&he,
-				#endif
 					H_SETSIZE, 100);
 				el_set(el, EL_HIST, history, hist);
 				el_set(el, EL_EDITOR, "emacs");
@@ -67,10 +61,7 @@ input(int *cmd)
 			len = (num > MAXLINE) ? MAXLINE : num;
 			memcpy(buf, bp, len);
 			buf[len] = 0;
-			history(hist,
-				#if __FreeBSD_version >= 500000
-					&he,
-				#endif
+			history(hist, &he,
 				H_ENTER, bp);
 #undef MAXLINE
 
