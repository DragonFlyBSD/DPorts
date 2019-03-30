--- parsers/tex.c.orig	2019-02-23 00:22:09 UTC
+++ parsers/tex.c
@@ -309,8 +309,10 @@ getNextChar:
 				   * else it is not a potential tex tag.
 				   */
 				  c = getcFromInputFile ();
-				  if (! isalpha (c))
-					  ungetcToInputFile (c);
+				  if (! isalpha (c)) {
+					  if (c != EOF)
+						ungetcToInputFile (c);
+				    }
 				  else
 				  {
 					  vStringPut (token->string, '\\');
