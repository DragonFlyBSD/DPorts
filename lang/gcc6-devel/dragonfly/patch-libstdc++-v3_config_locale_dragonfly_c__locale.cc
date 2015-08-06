--- libstdc++-v3/config/locale/dragonfly/c_locale.cc.orig	2015-01-05 12:33:28 UTC
+++ libstdc++-v3/config/locale/dragonfly/c_locale.cc
@@ -1,6 +1,6 @@
-// Wrapper for underlying C-language localization -*- C++ -*-
+// localization implementation details, DragonFly version -*- C++ -*-
 
-// Copyright (C) 2014-2015 Free Software Foundation, Inc.
+// Copyright (C) 2015 Free Software Foundation, Inc.
 //
 // This file is part of the GNU ISO C++ Library.  This library is free
 // software; you can redistribute it and/or modify it under the
@@ -27,18 +27,14 @@
 //
 
 // Written by Benjamin Kosnik <bkoz@redhat.com>
+// Modified for DragonFly by John Marino <gnugcc@marino.st>
 
-#include <cerrno>  // For errno
-#include <cmath>  // For isinf, finite, finitef, fabs
-#include <cstdlib>  // For strof, strtold
-#include <cstring>
-#include <cstdio>
+#include <cstdlib>
 #include <locale>
+#include <stdexcept>
 #include <limits>
-
-#ifdef _GLIBCXX_HAVE_IEEEFP_H
-#include <ieeefp.h>
-#endif
+#include <langinfo.h>
+#include <xlocale.h>
 
 namespace std _GLIBCXX_VISIBILITY(default)
 {
@@ -46,41 +42,11 @@ _GLIBCXX_BEGIN_NAMESPACE_VERSION
 
   template<>
     void
-    __convert_to_v(const char* __s, float& __v, ios_base::iostate& __err,
-		   const __c_locale&) throw()
+    __convert_to_v(const char* __s, float& __v, ios_base::iostate& __err, 
+		   const __c_locale& __cloc) throw()
     {
-      // Assumes __s formatted for "C" locale.
-      char* __old = setlocale(LC_ALL, 0);
-      const size_t __len = strlen(__old) + 1;
-      char* __sav = new char[__len];
-      memcpy(__sav, __old, __len);
-      setlocale(LC_ALL, "C");
       char* __sanity;
-      bool __overflow = false;
-
-#if !__FLT_HAS_INFINITY__
-      errno = 0;
-#endif
-
-#ifdef _GLIBCXX_HAVE_STRTOF
-      __v = strtof(__s, &__sanity);
-#else
-      double __d = strtod(__s, &__sanity);
-      __v = static_cast<float>(__d);
-#ifdef _GLIBCXX_HAVE_FINITEF
-      if (!finitef (__v))
-	__overflow = true;
-#elif defined (_GLIBCXX_HAVE_FINITE)
-      if (!finite (static_cast<double> (__v)))
-	__overflow = true;
-#elif defined (_GLIBCXX_HAVE_ISINF)
-      if (isinf (static_cast<double> (__v)))
-	__overflow = true;
-#else
-      if (fabs(__d) > numeric_limits<float>::max())
-	__overflow = true;
-#endif
-#endif // _GLIBCXX_HAVE_STRTOF
+      __v = strtof_l(__s, &__sanity, (locale_t)__cloc);
 
       // _GLIBCXX_RESOLVE_LIB_DEFECTS
       // 23. Num_get overflow result.
@@ -89,44 +55,25 @@ _GLIBCXX_BEGIN_NAMESPACE_VERSION
 	  __v = 0.0f;
 	  __err = ios_base::failbit;
 	}
-      else if (__overflow
-#if __FLT_HAS_INFINITY__
-	       || __v == numeric_limits<float>::infinity()
-	       || __v == -numeric_limits<float>::infinity()
-#else
-	       || ((__v > 1.0f || __v < -1.0f) && errno == ERANGE)
-#endif
-	      )
+      else if (__v == numeric_limits<float>::infinity())
 	{
-	  if (__v > 0.0f)
-	    __v = numeric_limits<float>::max();
-	  else
-	    __v = -numeric_limits<float>::max();
+	  __v = numeric_limits<float>::max();
+	  __err = ios_base::failbit;
+	}
+      else if (__v == -numeric_limits<float>::infinity())
+	{
+	  __v = -numeric_limits<float>::max();
 	  __err = ios_base::failbit;
 	}
-
-      setlocale(LC_ALL, __sav);
-      delete [] __sav;
     }
 
   template<>
     void
-    __convert_to_v(const char* __s, double& __v, ios_base::iostate& __err,
-		   const __c_locale&) throw()
+    __convert_to_v(const char* __s, double& __v, ios_base::iostate& __err, 
+		   const __c_locale& __cloc) throw()
     {
-      // Assumes __s formatted for "C" locale.
-      char* __old = setlocale(LC_ALL, 0);
-      const size_t __len = strlen(__old) + 1;
-      char* __sav = new char[__len];
-      memcpy(__sav, __old, __len);
-      setlocale(LC_ALL, "C");
       char* __sanity;
-
-#if !__DBL_HAS_INFINITY__
-      errno = 0;
-#endif
-
-      __v = strtod(__s, &__sanity);
+      __v = strtod_l(__s, &__sanity, (locale_t)__cloc);
 
       // _GLIBCXX_RESOLVE_LIB_DEFECTS
       // 23. Num_get overflow result.
@@ -135,132 +82,86 @@ _GLIBCXX_BEGIN_NAMESPACE_VERSION
 	  __v = 0.0;
 	  __err = ios_base::failbit;
 	}
-      else if (
-#if __DBL_HAS_INFINITY__
-	       __v == numeric_limits<double>::infinity()
-	       || __v == -numeric_limits<double>::infinity())
-#else
-	       (__v > 1.0 || __v < -1.0) && errno == ERANGE)
-#endif
+      else if (__v == numeric_limits<double>::infinity())
 	{
-	  if (__v > 0.0)
-	    __v = numeric_limits<double>::max();
-	  else
-	    __v = -numeric_limits<double>::max();
+	  __v = numeric_limits<double>::max();
+	  __err = ios_base::failbit;
+	}
+      else if (__v == -numeric_limits<double>::infinity())
+	{
+	  __v = -numeric_limits<double>::max();
 	  __err = ios_base::failbit;
 	}
-
-      setlocale(LC_ALL, __sav);
-      delete [] __sav;
     }
 
   template<>
     void
-    __convert_to_v(const char* __s, long double& __v,
-		   ios_base::iostate& __err, const __c_locale&) throw()
+    __convert_to_v(const char* __s, long double& __v, ios_base::iostate& __err,
+		   const __c_locale& __cloc) throw()
     {
-      // Assumes __s formatted for "C" locale.
-      char* __old = setlocale(LC_ALL, 0);
-      const size_t __len = strlen(__old) + 1;
-      char* __sav = new char[__len];
-      memcpy(__sav, __old, __len);
-      setlocale(LC_ALL, "C");
-
-#if !__LDBL_HAS_INFINITY__
-      errno = 0;
-#endif
-
-#if defined(_GLIBCXX_HAVE_STRTOLD) && !defined(_GLIBCXX_HAVE_BROKEN_STRTOLD)
       char* __sanity;
-      __v = strtold(__s, &__sanity);
+      __v = strtold_l(__s, &__sanity, (locale_t)__cloc);
 
       // _GLIBCXX_RESOLVE_LIB_DEFECTS
       // 23. Num_get overflow result.
       if (__sanity == __s || *__sanity != '\0')
-#else
-      typedef char_traits<char>::int_type int_type;
-      int __p = sscanf(__s, "%Lf", &__v);
-
-      if (!__p || static_cast<int_type>(__p) == char_traits<char>::eof())
-#endif
 	{
 	  __v = 0.0l;
 	  __err = ios_base::failbit;
 	}
-       else if (
-#if __LDBL_HAS_INFINITY__
-		__v == numeric_limits<long double>::infinity()
-		|| __v == -numeric_limits<long double>::infinity())
-#else
-		(__v > 1.0l || __v < -1.0l) && errno == ERANGE)
-#endif
+      else if (__v == numeric_limits<long double>::infinity())
 	{
-	  if (__v > 0.0l)
-	    __v = numeric_limits<long double>::max();
-	  else
-	    __v = -numeric_limits<long double>::max();
+	  __v = numeric_limits<long double>::max();
+	  __err = ios_base::failbit;
+	}
+      else if (__v == -numeric_limits<long double>::infinity())
+	{
+	  __v = -numeric_limits<long double>::max();
 	  __err = ios_base::failbit;
 	}
-
-      setlocale(LC_ALL, __sav);
-      delete [] __sav;
     }
 
-
-  /*  DragonFly's implementation of setlocale won't accept something like
-      "de_DE".  According to nls manpage, the expected format is:
-      language[_territory][.codeset][@modifier], but it seems that both
-      the _territory and .codeset components are required.
-      
-      As an attempt to correct for this, we'll tack on ".UTF-8" if 
-      a period is not detected in the locale string.  
-
-      There are no locales with modifiers on DragonFly so if found, they
-      will just be stripped off silently.  e.g "de_DE@euro" will be reduced
-      to "de_DE".  The UTF-8 default would be added after that.
-  */
-
   void
   locale::facet::_S_create_c_locale(__c_locale& __cloc, const char* __s,
-				    __c_locale)
+				    __c_locale __old)
   {
-    const size_t size__s = (__s == NULL) ? 1 : strlen (__s);
-    const char UTF8[] = ".UTF-8";
-    char localspec[size__s + 6 + 1];
-    
-    if (__s == NULL) {
-       localspec[0] = '\0';
-    } else {
-       strcpy (localspec, __s);
-       char * pch = strchr (localspec, '@');
-       if (pch != NULL)
-          *pch = 0;
-
-       if (  (strchr (__s, '.') == NULL)
-          && (strcmp (__s, "C") != 0)
-          && (strcmp (__s, "POSIX") != 0))
-          strncat (localspec, UTF8, 6);
-    }
-
-    const char * result = std::setlocale(LC_ALL, localspec);
-    
-    if ((strcmp(result, "C") != 0) && (strcmp (result, localspec) != 0))
-      __throw_runtime_error(__N("locale::facet::_S_create_c_locale "
-			    "name not valid"));
-    __cloc = 0;
+    __cloc = (__c_locale)newlocale(LC_ALL_MASK, __s, (locale_t)__old);
+    if (!__cloc)
+      {
+	// This named locale is not supported by the underlying OS.
+	__throw_runtime_error(__N("locale::facet::_S_create_c_locale "
+				  "name not valid"));
+      }
   }
 
   void
   locale::facet::_S_destroy_c_locale(__c_locale& __cloc)
-  { __cloc = 0; }
+  {
+    if (__cloc && _S_get_c_locale() != __cloc)
+      freelocale((locale_t)__cloc);
+  }
 
   __c_locale
-  locale::facet::_S_clone_c_locale(__c_locale&) throw()
-  { return __c_locale(); }
+  locale::facet::_S_clone_c_locale(__c_locale& __cloc) throw()
+  { return (__c_locale)duplocale((locale_t)__cloc); }
 
   __c_locale
-  locale::facet::_S_lc_ctype_c_locale(__c_locale, const char*)
-  { return __c_locale(); }
+  locale::facet::_S_lc_ctype_c_locale(__c_locale __cloc, const char* __s)
+  {
+    __c_locale __dup = (__c_locale)duplocale((locale_t)__cloc);
+    if (__dup == __c_locale(0))
+      __throw_runtime_error(__N("locale::facet::_S_lc_ctype_c_locale "
+				"duplocale error"));
+    __c_locale __changed = (__c_locale)newlocale(LC_CTYPE_MASK, __s,
+						 (locale_t)__dup);
+    if (__changed == __c_locale(0))
+      {
+	freelocale((locale_t)__dup);
+	__throw_runtime_error(__N("locale::facet::_S_lc_ctype_c_locale "
+				  "newlocale error"));
+      }
+    return __changed;
+  }
 
 _GLIBCXX_END_NAMESPACE_VERSION
 } // namespace
@@ -295,5 +196,5 @@ _GLIBCXX_END_NAMESPACE_VERSION
 #ifdef _GLIBCXX_LONG_DOUBLE_COMPAT
 #define _GLIBCXX_LDBL_COMPAT(dbl, ldbl) \
   extern "C" void ldbl (void) __attribute__ ((alias (#dbl)))
-_GLIBCXX_LDBL_COMPAT(_ZSt14__convert_to_vIdEvPKcRT_RSt12_Ios_IostateRKPi, _ZSt14__convert_to_vIeEvPKcRT_RSt12_Ios_IostateRKPi);
+_GLIBCXX_LDBL_COMPAT(_ZSt14__convert_to_vIdEvPKcRT_RSt12_Ios_IostateRKP15__locale_struct, _ZSt14__convert_to_vIeEvPKcRT_RSt12_Ios_IostateRKP15__locale_struct);
 #endif // _GLIBCXX_LONG_DOUBLE_COMPAT
