--- libstdc++-v3/config/locale/dragonfly/ctype_members.cc.orig	2015-01-05 12:33:28 UTC
+++ libstdc++-v3/config/locale/dragonfly/ctype_members.cc
@@ -1,4 +1,4 @@
-// std::ctype implementation details, GNU version -*- C++ -*-
+// std::ctype implementation details, DragonFly version -*- C++ -*-
 
 // Copyright (C) 2014-2015 Free Software Foundation, Inc.
 //
@@ -27,18 +27,22 @@
 //
 
 // Written by Benjamin Kosnik <bkoz@redhat.com>
+// Modified for DragonFly by John Marino <gnugcc@marino.st>
 
 #include <locale>
-#include <bits/c++locale_internal.h>
-#include <cstdlib>
 #include <cstring>
 #include <cstdio>
 
+#ifndef _ISbit
+#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
+#endif
+
 namespace std _GLIBCXX_VISIBILITY(default)
 {
+_GLIBCXX_BEGIN_NAMESPACE_VERSION
+
   // NB: The other ctype<char> specializations are in src/locale.cc and
   // various /config/os/* files.
-
   ctype_byname<char>::ctype_byname(const char* __s, size_t __refs)
   : ctype<char>(0, false, __refs) 
   { 		
@@ -54,24 +58,63 @@ namespace std _GLIBCXX_VISIBILITY(defaul
 
 #ifdef _GLIBCXX_USE_WCHAR_T  
   ctype<wchar_t>::__wmask_type
-  ctype<wchar_t>::_M_convert_to_wmask(
-    const mask __attribute__((__unused__)) __m) const throw()
+  ctype<wchar_t>::_M_convert_to_wmask(const mask __m) const throw()
   {
-    // DragonFly uses the same codes for 'char' as 'wchar_t', so this routine
-    // never gets called.
-    return __wmask_type();
-  };
+    __wmask_type __ret;
+    switch (__m)
+      {
+      case space:
+	__ret = wctype_l("space", (locale_t)_M_c_locale_ctype);
+	break;
+      case print:
+	__ret = wctype_l("print", (locale_t)_M_c_locale_ctype);
+	break;
+      case cntrl:
+	__ret = wctype_l("cntrl", (locale_t)_M_c_locale_ctype);
+	break;
+      case upper:
+	__ret = wctype_l("upper", (locale_t)_M_c_locale_ctype);
+	break;
+      case lower:
+	__ret = wctype_l("lower", (locale_t)_M_c_locale_ctype);
+	break;
+      case alpha:
+	__ret = wctype_l("alpha", (locale_t)_M_c_locale_ctype);
+	break;
+      case digit:
+	__ret = wctype_l("digit", (locale_t)_M_c_locale_ctype);
+	break;
+      case punct:
+	__ret = wctype_l("punct", (locale_t)_M_c_locale_ctype);
+	break;
+      case xdigit:
+	__ret = wctype_l("xdigit", (locale_t)_M_c_locale_ctype);
+	break;
+      case alnum:
+	__ret = wctype_l("alnum", (locale_t)_M_c_locale_ctype);
+	break;
+      case graph:
+	__ret = wctype_l("graph", (locale_t)_M_c_locale_ctype);
+	break;
+      case blank:
+	__ret = wctype_l("blank", (locale_t)_M_c_locale_ctype);
+	break;
+      default:
+	__ret = __wmask_type();
+      }
+    return __ret;
+  }
   
   wchar_t
   ctype<wchar_t>::do_toupper(wchar_t __c) const
-  { return towupper(__c); }
+  { return towupper_l(__c, (locale_t)_M_c_locale_ctype); }
 
   const wchar_t*
   ctype<wchar_t>::do_toupper(wchar_t* __lo, const wchar_t* __hi) const
   {
     while (__lo < __hi)
       {
-        *__lo = towupper(*__lo);
+        *__lo = towupper_l(*__lo, (locale_t)_M_c_locale_ctype);
         ++__lo;
       }
     return __hi;
@@ -79,14 +122,14 @@ namespace std _GLIBCXX_VISIBILITY(defaul
   
   wchar_t
   ctype<wchar_t>::do_tolower(wchar_t __c) const
-  { return towlower(__c); }
+  { return towlower_l(__c, (locale_t)_M_c_locale_ctype); }
   
   const wchar_t*
   ctype<wchar_t>::do_tolower(wchar_t* __lo, const wchar_t* __hi) const
   {
     while (__lo < __hi)
       {
-        *__lo = towlower(*__lo);
+        *__lo = towlower_l(*__lo, (locale_t)_M_c_locale_ctype);
         ++__lo;
       }
     return __hi;
@@ -113,10 +156,12 @@ namespace std _GLIBCXX_VISIBILITY(defaul
   char
   ctype<wchar_t>::
   do_narrow(wchar_t __wc, char __dfault) const
-  { 
+  {
     if (__wc >= 0 && __wc < 128 && _M_narrow_ok)
       return _M_narrow[__wc];
+    __c_locale __old = (__c_locale)uselocale((locale_t)_M_c_locale_ctype);
     const int __c = wctob(__wc);
+    uselocale((locale_t)__old);
     return (__c == EOF ? __dfault : static_cast<char>(__c)); 
   }
 
@@ -125,6 +170,7 @@ namespace std _GLIBCXX_VISIBILITY(defaul
   do_narrow(const wchar_t* __lo, const wchar_t* __hi, char __dfault, 
 	    char* __dest) const
   {
+    __c_locale __old = (__c_locale)uselocale((locale_t)_M_c_locale_ctype);
     if (_M_narrow_ok)
       while (__lo < __hi)
 	{
@@ -146,12 +192,14 @@ namespace std _GLIBCXX_VISIBILITY(defaul
 	  ++__lo;
 	  ++__dest;
 	}
+    uselocale((locale_t)__old);
     return __hi;
   }
 
   void
   ctype<wchar_t>::_M_initialize_ctype() throw()
   {
+    __c_locale __old = (__c_locale)uselocale((locale_t)_M_c_locale_ctype);
     wint_t __i;
     for (__i = 0; __i < 128; ++__i)
       {
@@ -165,9 +213,18 @@ namespace std _GLIBCXX_VISIBILITY(defaul
       _M_narrow_ok = true;
     else
       _M_narrow_ok = false;
-    for (size_t __i = 0;
-	 __i < sizeof(_M_widen) / sizeof(wint_t); ++__i)
-      _M_widen[__i] = btowc(__i);
+    for (size_t __j = 0;
+	 __j < sizeof(_M_widen) / sizeof(wint_t); ++__j)
+      _M_widen[__j] = btowc(__j);
+
+    for (size_t __k = 0; __k <= 11; ++__k)
+      { 
+	_M_bit[__k] = static_cast<mask>(_ISbit(__k));
+	_M_wmask[__k] = _M_convert_to_wmask(_M_bit[__k]);
+      }
+    uselocale((locale_t)__old);
   }
 #endif //  _GLIBCXX_USE_WCHAR_T
-}
+
+_GLIBCXX_END_NAMESPACE_VERSION
+} // namespace
