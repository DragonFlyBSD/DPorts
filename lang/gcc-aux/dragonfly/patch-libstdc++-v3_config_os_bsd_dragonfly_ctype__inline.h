--- libstdc++-v3/config/os/bsd/dragonfly/ctype_inline.h.intermediate	2013-01-31 16:08:30.387086000 +0100
+++ libstdc++-v3/config/os/bsd/dragonfly/ctype_inline.h	2013-01-31 16:38:32.990332000 +0100
@@ -42,14 +42,38 @@
   bool
   ctype<char>::
   is(mask __m, char __c) const
-  { return _M_table[(unsigned char)(__c)] & __m; }
+  {
+    if (_M_table)
+      return _M_table[static_cast<unsigned char>(__c)] & __m;
+    else
+      return __libc_ctype_ [__c + 1] & __m;
+  }
 
   const char*
   ctype<char>::
   is(const char* __low, const char* __high, mask* __vec) const
   {
-    while (__low < __high)
-      *__vec++ = _M_table[*__low++];
+    if (_M_table)
+      while (__low < __high)
+	*__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
+    else
+      for (;__low < __high; ++__vec, ++__low)
+	{
+	  mask __m = 0;
+	  if (this->is(upper, *__low))  __m |= upper;
+	  if (this->is(lower, *__low))  __m |= lower;
+	  if (this->is(alpha, *__low))  __m |= alpha;
+	  if (this->is(digit, *__low))  __m |= digit;
+	  if (this->is(xdigit, *__low)) __m |= xdigit;
+	  if (this->is(space, *__low))  __m |= space;
+	  if (this->is(print, *__low))  __m |= print;
+	  if (this->is(graph, *__low))  __m |= graph;
+	  if (this->is(cntrl, *__low))  __m |= cntrl;
+	  if (this->is(punct, *__low))  __m |= punct;
+	  // Do not include explicit line for alnum mask since it is a
+	  // pure composite of masks on DragonFly.
+	  *__vec = __m;
+	}
     return __high;
   }
 
@@ -57,8 +81,13 @@
   ctype<char>::
   scan_is(mask __m, const char* __low, const char* __high) const
   {
-    while (__low < __high && !this->is(__m, *__low))
-      ++__low;
+    if (_M_table)
+      while (__low < __high
+	     && !(_M_table[static_cast<unsigned char>(*__low)] & __m))
+	++__low;
+    else
+      while (__low < __high && !this->is(__m, *__low))
+	++__low;
     return __low;
   }
 
@@ -66,8 +95,13 @@
   ctype<char>::
   scan_not(mask __m, const char* __low, const char* __high) const
   {
-    while (__low < __high && this->is(__m, *__low) != 0)
-      ++__low;
+    if (_M_table)
+      while (__low < __high
+	     && (_M_table[static_cast<unsigned char>(*__low)] & __m) != 0)
+	++__low;
+    else
+      while (__low < __high && this->is(__m, *__low) != 0)
+	++__low;
     return __low;
   }
 
