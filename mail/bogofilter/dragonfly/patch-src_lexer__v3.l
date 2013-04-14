--- src/lexer_v3.l.orig	2010-07-28 17:24:05.000000000 +0000
+++ src/lexer_v3.l
@@ -241,7 +241,7 @@ VERP		{TOKEN}-{VERPID}-{TOKEN}={TOKEN}@{
 <INITIAL>^Content-(Transfer-Encoding|Type|Disposition):{MTYPE}	{ mime_content(yy_text()); skip_to(':'); header(); return TOKEN; }
 
 <INITIAL>^Message-ID:.*				{ /* save token for logging */
-						  int off = 11;
+						  unsigned long off = 11;
 						  while(isspace((unsigned char)yytext[off]) && off < yyleng)
 						      off++;
 						  set_msg_id((unsigned char *)(yytext+off), yyleng-off);
@@ -470,6 +470,12 @@ void yy_set_state_initial(void)
 #endif
 }
 
+long lexer_v3_get_token(byte **output)
+{
+    *output = (byte *)yytext;
+    return yyleng;
+}
+
 /*
  * The following sets edit modes for GNU EMACS
  * Local Variables:
