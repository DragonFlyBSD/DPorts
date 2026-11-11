--- ../../src/mpatrol.h.orig
+++ ../../src/mpatrol.h
@@ -1027,7 +1027,6 @@
 MP_INLINE
 void *
 operator new(size_t l, MP_CONST char *s, MP_CONST char *t, unsigned long u)
-             throw(std::bad_alloc)
 {
     void *p;
 
@@ -1055,7 +1054,6 @@
 MP_INLINE
 void *
 operator new[](size_t l, MP_CONST char *s, MP_CONST char *t, unsigned long u)
-               throw(std::bad_alloc)
 {
     void *p;
 
