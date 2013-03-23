--- lexical.l.orig	1996-03-14 13:02:01.000000000 +0000
+++ lexical.l
@@ -176,7 +176,7 @@ char errormessage[255];             /* u
  * ``yylineno'' not POSIX standard, so have to simulate it when using flex.
  */
 #ifdef FLEX_SCANNER
-int yylineno=0;
+int ayylineno=0;
 #endif
 
 %}
@@ -200,7 +200,7 @@ int yylineno=0;
 
 \n		{
 #ifdef FLEX_SCANNER
-  		  yylineno++; 
+  		  ayylineno++; 
 #endif
 		}
 [\t ]           { /* Ignore White space */ }
@@ -289,17 +289,17 @@ char *message;
    *
    */
   
-  extern int yylineno;
+  extern int ayylineno;
   
   if (preferences_filename == NULL) 
     preferences_filename = XtNewString("config file");
 
   if (parseerror < MAXERR) {
-    fprintf(stderr, "(E) %s:line :%2d: ", preferences_filename, yylineno);
+    fprintf(stderr, "(E) %s:line :%2d: ", preferences_filename, ayylineno);
     fprintf(stderr, "%s\n", message);
     parseerror++;
   } else {
-    fprintf(stderr, "(E) %s:line :%2d: ", preferences_filename, yylineno);
+    fprintf(stderr, "(E) %s:line :%2d: ", preferences_filename, ayylineno);
     fprintf(stderr, "%s\n", message);
     parseerror++;
     /* fprintf(stderr, "Fatal error: over %d errors, exiting\n", MAXERR); */
