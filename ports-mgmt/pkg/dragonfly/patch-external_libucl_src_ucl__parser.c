--- external/libucl/src/ucl_parser.c.orig	2014-01-13 14:03:35.000000000 +0000
+++ external/libucl/src/ucl_parser.c
@@ -883,7 +883,7 @@ static bool
 ucl_parse_key (struct ucl_parser *parser, struct ucl_chunk *chunk, bool *next_key, bool *end_of_object)
 {
 	const unsigned char *p, *c = NULL, *end, *t;
-	const char *key;
+	const char *key = NULL;
 	bool got_quote = false, got_eq = false, got_semicolon = false,
 			need_unescape = false, ucl_escape = false, var_expand = false,
 			got_content = false, got_sep = false;
