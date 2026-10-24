--- DBI.xs.orig
+++ DBI.xs
@@ -1925,6 +1925,8 @@
     int cast_ok = 0;
     int grok_flags;
     UV uv;
+    STRLEN len;
+    char *p;
 
     /* do nothing for undef (NULL) or non-string values */
     if (!sv || !SvOK(sv))
@@ -1957,8 +1959,7 @@
     /* else no error and sv is untouched */
     case SQL_NUMERIC:
         /* based on the code in perl's toke.c */
-        STRLEN len;
-        char *p = SvPV(sv, len); /* force stringify, handle magic */
+        p = SvPV(sv, len); /* force stringify, handle magic */
         uv = 0;
         grok_flags = grok_number(p, len, &uv);
         cast_ok = 1;
