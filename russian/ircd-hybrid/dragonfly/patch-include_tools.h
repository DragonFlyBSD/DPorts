--- include/tools.h.intermediate	2015-03-21 11:02:13 UTC
+++ include/tools.h
@@ -91,7 +91,7 @@ void mem_frob(void *data, int len);
 /* forte (and maybe others) dont like these being declared twice,
  * so we dont declare the inlines unless GNUC.
  */
-#if defined(__GNUC__) && !defined(__clang__)
+#if 0
 
 /* 
  * dlink_ routines are stolen from squid, except for dlinkAddBefore,
