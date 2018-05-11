--- src/util/lp/permutation_matrix.h.orig	2018-03-14 11:38:49.000000000 +0000
+++ src/util/lp/permutation_matrix.h
@@ -132,7 +132,7 @@ class permutation_matrix : public tail_m
 
         unsigned size() const { return static_cast<unsigned>(m_rev.size()); }
 
-        unsigned * values() const { return m_permutation; }
+        unsigned * values() const { return (unsigned *)m_permutation; }
 
         void resize(unsigned size) {
             unsigned old_size = m_permutation.size();
