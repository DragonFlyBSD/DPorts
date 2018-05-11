Upstream fix.

--- src/libgambit/shared_ptr.h.orig	2016-05-27 10:58:14.000000000 +0000
+++ src/libgambit/shared_ptr.h
@@ -131,7 +131,7 @@ public:
   long use_count(void) const { return *m_count; }
   bool expired(void) const   { return *m_count == 0; }
 
-  void swap(const weak_ptr<T> &other)  // never throws
+  void swap(weak_ptr<T> &other)  // never throws
   {
     std::swap(m_ptr, other.m_ptr);
     std::swap(m_count, other.m_count);
