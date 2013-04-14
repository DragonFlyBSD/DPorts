--- src/msgcounts.h.orig	2007-07-23 22:44:05.000000000 +0000
+++ src/msgcounts.h
@@ -30,4 +30,6 @@ void init_msg_counts(void);
 void set_msg_counts(u_int32_t good, u_int32_t spam);
 void set_msg_counts_from_str(char  *str);
 
+long msg_count_get_token(byte **output);
+
 #endif	/* MSGCOUNTS_H */
