--- hotspot/src/share/vm/gc_implementation/g1/g1SATBCardTableModRefBS.hpp.intermediate	2015-09-10 12:07:38 UTC
+++ hotspot/src/share/vm/gc_implementation/g1/g1SATBCardTableModRefBS.hpp
@@ -85,16 +85,8 @@ public:
   }
 
   template <class T> void write_ref_array_pre_work(T* dst, int count);
-  virtual void write_ref_array_pre(oop* dst, int count, bool dest_uninitialized) {
-    if (!dest_uninitialized) {
-      write_ref_array_pre_work(dst, count);
-    }
-  }
-  virtual void write_ref_array_pre(narrowOop* dst, int count, bool dest_uninitialized) {
-    if (!dest_uninitialized) {
-      write_ref_array_pre_work(dst, count);
-    }
-  }
+  virtual void write_ref_array_pre(oop* dst, int count, bool dest_uninitialized);
+  virtual void write_ref_array_pre(narrowOop* dst, int count, bool dest_uninitialized);
 
 /*
    Claimed and deferred bits are used together in G1 during the evacuation
