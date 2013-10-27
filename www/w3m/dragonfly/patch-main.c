--- main.c.intermediate	2013-10-27 08:35:34.177157000 +0000
+++ main.c
@@ -2263,7 +2263,7 @@ DEFUN(movR1, MOVE_RIGHT1,
 static wc_uint32
 getChar(char *p)
 {
-    return wc_any_to_ucs(wtf_parse1(&p));
+    return wc_any_to_ucs(wtf_parse1((wc_uchar *)&p));
 }
 
 static int
