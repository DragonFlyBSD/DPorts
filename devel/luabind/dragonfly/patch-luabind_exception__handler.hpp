--- luabind/exception_handler.hpp.orig
+++ luabind/exception_handler.hpp
@@ -9,6 +9,7 @@
 # include <luabind/config.hpp>
 # include <boost/optional.hpp>
 # include <boost/type.hpp>
+# include <boost/mpl/if.hpp>
 
 # if BOOST_WORKAROUND(BOOST_MSVC, <= 1300)
 #  include <boost/mpl/if.hpp>
