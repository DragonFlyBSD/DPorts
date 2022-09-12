--- src/rime/gear/table_translator.cc.orig	2022-09-10 11:37:02.640658000 +0200
+++ src/rime/gear/table_translator.cc	2022-09-10 11:37:11.340460000 +0200
@@ -4,6 +4,7 @@
 //
 // 2011-07-10 GONG Chen <chen.sst@gmail.com>
 //
+#include <cmath> // for std::exp
 #include <boost/algorithm/string.hpp>
 #include <boost/range/adaptor/reversed.hpp>
 #include <utf8.h>
@@ -80,7 +81,7 @@
   if (phrase) {
     phrase->set_comment(comment);
     phrase->set_preedit(preedit_);
-    phrase->set_quality(exp(e->weight) +
+    phrase->set_quality(std::exp(e->weight) +
                         options_->initial_quality() +
                         (incomplete ? -1 : 0) +
                         (is_user_phrase ? 0.5 : 0));
