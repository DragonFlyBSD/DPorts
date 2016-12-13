Backport https://svn.boost.org/trac/boost/ticket/12534
Fixes at least net-p2p/twister

--- boost/container/detail/pair.hpp.orig	2016-09-21 17:33:21.000000000 +0300
+++ boost/container/detail/pair.hpp
@@ -417,6 +417,8 @@ inline void swap(pair<T1, T2>& x, pair<T
 }  //namespace container {
 
 
+// zrj: backport from https://svn.boost.org/trac/boost/ticket/12534
+#if 0
 //Without this specialization recursive flat_(multi)map instantiation fails
 //because is_enum needs to instantiate the recursive pair, leading to a compilation error).
 //This breaks the cycle clearly stating that pair is not an enum avoiding any instantiation.
@@ -445,6 +447,7 @@ struct is_class< ::boost::container::con
 {
    static const bool value = true;
 };
+#endif
 
 #ifdef BOOST_NO_CXX11_RVALUE_REFERENCES
 
