--- parsers/tex.c.orig	2019-02-02 15:11:03.502710000 -0800
+++ parsers/tex.c
@@ -264,6 +264,8 @@
 	{
 		vStringPut (string, c);
 		c = getcFromInputFile ();
+		if (c == EOF)
+			break;
 	} while (isIdentChar (c));
 
 	if (c != EOF)
@@ -309,8 +311,10 @@
 				   * else it is not a potential tex tag.
 				   */
 				  c = getcFromInputFile ();
-				  if (! isalpha (c))
-					  ungetcToInputFile (c);
+				  if (! isalpha (c)) {
+					if (c != EOF)
+					      ungetcToInputFile (c);
+				    }
 				  else
 				  {
 					  vStringPut (token->string, '\\');
