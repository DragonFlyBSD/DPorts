--- src/msgcounts.c.orig	2007-07-23 22:44:05.000000000 +0000
+++ src/msgcounts.c
@@ -85,3 +85,9 @@ void set_msg_counts_from_str(char *str)
 
     msg_count_header_len= strlen(msg_count_header);
 }
+
+long msg_count_get_token(byte **output)
+{
+    *output = (byte *)msg_count_text;
+    return msg_count_leng;
+}
