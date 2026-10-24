--- src/commentscan.l.orig
+++ src/commentscan.l
@@ -994,7 +994,7 @@
                                           DString fullMatch = yytext;
                                           size_t idx = fullMatch.find('{');
                                           /* handle `f{` command as special case */
-                                          if ((idx > 1) && (yytext[idx-1] == 'f') && (yytext[idx-2] == '\\' || yytext[idx-2] =='@')) REJECT;
+                                          if ((idx != DString::npos) && (idx > 1) && (yytext[idx-1] == 'f') && (yytext[idx-2] == '\\' || yytext[idx-2] =='@')) REJECT;
                                           size_t idxEnd = fullMatch.find('}',idx+1);
                                           DString cmdName;
                                           StringVector optList;
@@ -2086,7 +2086,7 @@
                                           DString fullMatch = yytext;
                                           size_t idx = fullMatch.find('{');
                                           /* handle `f{` command as special case */
-                                          if ((idx > 1) && (yytext[idx-1] == 'f') && (yytext[idx-2] == '\\' || yytext[idx-2] =='@')) REJECT;
+                                          if ((idx != DString::npos) && (idx > 1) && (yytext[idx-1] == 'f') && (yytext[idx-2] == '\\' || yytext[idx-2] =='@')) REJECT;
                                           size_t idxEnd = fullMatch.find("}",idx+1);
                                           DString cmdName;
                                           StringVector optList;
