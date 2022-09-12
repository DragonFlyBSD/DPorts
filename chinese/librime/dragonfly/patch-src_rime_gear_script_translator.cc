--- src/rime/gear/script_translator.cc.orig	2022-09-10 11:27:37.583543000 +0200
+++ src/rime/gear/script_translator.cc	2022-09-10 11:28:04.012941000 +0200
@@ -7,6 +7,7 @@
 // 2011-07-10 GONG Chen <chen.sst@gmail.com>
 //
 #include <algorithm>
+#include <cmath> // for std::exp
 #include <stack>
 #include <boost/algorithm/string/join.hpp>
 #include <boost/range/adaptor/reversed.hpp>
@@ -487,7 +488,7 @@
                        start_,
                        start_ + user_phrase_code_length,
                        entry);
-    cand->set_quality(exp(entry->weight) +
+    cand->set_quality(std::exp(entry->weight) +
                       translator_->initial_quality() +
                       (IsNormalSpelling() ? 0.5 : -0.5));
   }
@@ -501,7 +502,7 @@
                        start_,
                        start_ + phrase_code_length,
                        entry);
-    cand->set_quality(exp(entry->weight) +
+    cand->set_quality(std::exp(entry->weight) +
                       translator_->initial_quality() +
                       (IsNormalSpelling() ? 0 : -1));
   }
