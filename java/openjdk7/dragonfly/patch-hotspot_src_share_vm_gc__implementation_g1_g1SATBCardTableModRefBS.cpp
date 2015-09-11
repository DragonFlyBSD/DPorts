--- hotspot/src/share/vm/gc_implementation/g1/g1SATBCardTableModRefBS.cpp.intermediate	2015-09-10 12:07:43 UTC
+++ hotspot/src/share/vm/gc_implementation/g1/g1SATBCardTableModRefBS.cpp
@@ -76,6 +76,18 @@ G1SATBCardTableModRefBS::write_ref_array
   }
 }
 
+void G1SATBCardTableModRefBS::write_ref_array_pre(oop* dst, int count, bool dest_uninitialized) {
+  if (!dest_uninitialized) {
+    write_ref_array_pre_work(dst, count);
+  }
+}
+
+void G1SATBCardTableModRefBS::write_ref_array_pre(narrowOop* dst, int count, bool dest_uninitialized) {
+  if (!dest_uninitialized) {
+    write_ref_array_pre_work(dst, count);
+  }
+}
+
 bool G1SATBCardTableModRefBS::mark_card_deferred(size_t card_index) {
   jbyte val = _byte_map[card_index];
   // It's already processed
