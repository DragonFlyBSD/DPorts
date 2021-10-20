--- vim.c.orig	2018-03-26 22:39:12 UTC
+++ vim.c
@@ -394,6 +394,10 @@ static boolean parseCommand (const unsig
 			while (*cp && !isspace ((int) *cp))
 				++cp; 
 		}
+		else
+		{
+			++cp;	
+		}
 	} while ( *cp &&  !isalnum ((int) *cp) );
 
 	if ( ! *cp )
