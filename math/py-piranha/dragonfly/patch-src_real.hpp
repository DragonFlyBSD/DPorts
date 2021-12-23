--- src/real.hpp.orig	2018-05-15 09:09:59 UTC
+++ src/real.hpp
@@ -59,6 +59,8 @@ see https://www.gnu.org/licenses/. */
 #include "safe_cast.hpp"
 #include "type_traits.hpp"
 
+#undef mpfr_set
+
 namespace piranha
 {
 
