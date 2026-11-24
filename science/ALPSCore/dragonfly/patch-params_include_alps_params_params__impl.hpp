--- params/include/alps/params/params_impl.hpp.orig
+++ params/include/alps/params/params_impl.hpp
@@ -10,6 +10,7 @@
    NOT TO BE INCLUDED DIRECTLY!
 */
 
+#include <algorithm>
 #include <boost/lexical_cast.hpp>
 #include <boost/optional.hpp>
 #include <locale> // FIXME: needed only for boolean conversions
