c++11 compat for hidden messages in Makdep

--- ps_tiny.c.intermediate	2018-03-02 16:37:39.000000000 +0000
+++ ps_tiny.c
@@ -144,7 +144,7 @@ static void ungetcc(int c) {
 }
 
 static void erri(char const*msg1, char const*msg2) {
-  fprintf(stderr, "%s: error at %"SLEN_P"u.%"SLEN_P"u.%"SLEN_P"u: %s%s\n",
+  fprintf(stderr, "%s: error at %" SLEN_P "u.%" SLEN_P "u.%" SLEN_P "u: %s%s\n",
     PROGNAME, curline, curofs-leftofs+1, curofs, msg1, msg2?msg2:"");
   exit(3);
 }
@@ -223,7 +223,7 @@ static sbool is_wordx(char const *s) {
 /** @param b: assume null-terminated @return true on error */
 static /*inline*/ sbool toInteger(char *s, psint_t *ret) {
   int n=0; /* BUGFIX?? found by __CHECKER__ */
-  return sscanf(s, "%"SLEN_P"i%n", ret, &n)<1 || s[n]!='\0';
+  return sscanf(s, "%" SLEN_P "i%n", ret, &n)<1 || s[n]!='\0';
 }
 
 /** @param b: assume null-terminated @return true on error */
@@ -693,7 +693,7 @@ int main(int argc, char**argv) {
   getotag("Abbr");
   getkey("acount");  acount=getuintval();
   getkey("xcount");  xcount=getuintval();
-  sprintf(tmp,"%"SLEN_P"u dict%%</I>", acount+xcount);
+  sprintf(tmp,"%" SLEN_P "u dict%%</I>", acount+xcount);
   setifmt(tmp,0); copy("I"); noifmt();
   gettagbeg();
 
