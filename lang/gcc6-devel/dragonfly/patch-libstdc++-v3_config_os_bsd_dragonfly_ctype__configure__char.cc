--- libstdc++-v3/config/os/bsd/dragonfly/ctype_configure_char.cc.orig	2015-01-05 12:33:28 UTC
+++ libstdc++-v3/config/os/bsd/dragonfly/ctype_configure_char.cc
@@ -40,29 +40,57 @@ _GLIBCXX_BEGIN_NAMESPACE_VERSION
   
   const ctype_base::mask*
   ctype<char>::classic_table() throw()
-  { return 0; }
+  { return NULL; }
 
   ctype<char>::ctype(__c_locale, const mask* __table, bool __del, 
 		     size_t __refs) 
-  : facet(__refs), _M_del(__table != 0 && __del), 
-  _M_toupper(NULL), _M_tolower(NULL), 
-  _M_table(__table ? __table : classic_table()) 
-  { 
+  : facet(__refs), _M_c_locale_ctype(_S_get_c_locale()),
+  _M_del(__table != 0 && __del), _M_widen_ok(0), _M_narrow_ok(0)
+  {
+    char* __old = setlocale(LC_CTYPE, NULL);
+    char* __sav = NULL;
+    if (strcmp(__old, "C"))
+      {
+	const size_t __len = strlen(__old) + 1;
+	__sav = new char[__len];
+	memcpy(__sav, __old, __len);
+	setlocale(LC_CTYPE, "C");
+      }
+    _M_toupper = NULL;
+    _M_tolower = NULL;
+    _M_table = __table ? __table : classic_table();
+    if (__sav)
+      {
+	setlocale(LC_CTYPE, __sav);
+	delete [] __sav;
+      }
     memset(_M_widen, 0, sizeof(_M_widen));
-    _M_widen_ok = 0;
     memset(_M_narrow, 0, sizeof(_M_narrow));
-    _M_narrow_ok = 0;
   }
 
   ctype<char>::ctype(const mask* __table, bool __del, size_t __refs) 
-  : facet(__refs), _M_del(__table != 0 && __del), 
-  _M_toupper(NULL), _M_tolower(NULL), 
-  _M_table(__table ? __table : classic_table()) 
-  { 
+  : facet(__refs), _M_c_locale_ctype(_S_get_c_locale()),
+  _M_del(__table != 0 && __del), _M_widen_ok(0), _M_narrow_ok(0)
+  {
+    char* __old = setlocale(LC_CTYPE, NULL);
+    char* __sav = NULL;
+    if (strcmp(__old, "C"))
+      {
+	const size_t __len = strlen(__old) + 1;
+	__sav = new char[__len];
+	memcpy(__sav, __old, __len);
+	setlocale(LC_CTYPE, "C");
+      }
+    _M_toupper = NULL;
+    _M_tolower = NULL;
+    _M_table = __table ? __table : classic_table();
+    if (__sav)
+      {
+	setlocale(LC_CTYPE, __sav);
+	delete [] __sav;
+      }
     memset(_M_widen, 0, sizeof(_M_widen));
-    _M_widen_ok = 0;
     memset(_M_narrow, 0, sizeof(_M_narrow));
-    _M_narrow_ok = 0;
   }
 
   char
