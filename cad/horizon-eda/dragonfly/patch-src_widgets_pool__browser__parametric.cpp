--- src/widgets/pool_browser_parametric.cpp.orig	2020-08-05 20:33:52 UTC
+++ src/widgets/pool_browser_parametric.cpp
@@ -2,6 +2,7 @@
 #include "pool/pool.hpp"
 #include "pool/part.hpp"
 #include "util/util.hpp"
+#include <cmath> // for std::isnan()
 
 namespace horizon {
 
@@ -113,7 +114,7 @@ public:
                                                const Glib::ustring &needle, const Gtk::TreeModel::iterator &it) {
                 auto v = string_to_double(it->get_value(list_columns.value));
                 auto needle_f = parse_si(needle);
-                if (isnan(needle_f))
+                if (std::isnan(needle_f))
                     return true;
                 if (std::abs(needle_f) >= 1 && std::abs(needle_f) < 1000) { // ignore si prefix
                     int exp = 0;
