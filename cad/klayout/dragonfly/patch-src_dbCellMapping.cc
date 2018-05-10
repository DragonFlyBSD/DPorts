                 from /construction/cad/klayout/klayout-0.24.9/src/dbCellMapping.cc:24:
/usr/include/c++/8.0/bits/stl_iterator_base_funcs.h: In instantiation of 'void std::__advance(_RandomAccessIterator&, _Distance, std::random_access_iterator_tag) [with _RandomAccessIterator = db::SortedCellIndexIterator; _Distance = long unsigned int]':
/usr/include/c++/8.0/bits/stl_iterator_base_funcs.h:206:21:   required from 'void std::advance(_InputIterator&, _Distance) [with _InputIterator = db::SortedCellIndexIterator; _Distance = long unsigned int]'
/usr/include/c++/8.0/bits/stl_algobase.h:958:16:   required from '_ForwardIterator std::__lower_bound(_ForwardIterator, _ForwardIterator, const _Tp&, _Compare) [with _ForwardIterator = db::SortedCellIndexIterator; _Tp = unsigned int; _Compare = __gnu_cxx::__ops::_Iter_less_val]'
/usr/include/c++/8.0/bits/stl_algobase.h:993:32:   required from '_ForwardIterator std::lower_bound(_ForwardIterator, _ForwardIterator, const _Tp&) [with _ForwardIterator = db::SortedCellIndexIterator; _Tp = unsigned int]'
/construction/cad/klayout/klayout-0.24.9/src/dbCellMapping.cc:191:48:   required from here
/usr/include/c++/8.0/bits/stl_iterator_base_funcs.h:183:2: error: no match for 'operator--' (operand type is 'db::SortedCellIndexIterator')
  --__i;

--- src/dbCellMapping.cc	2016-11-27 22:52:19.000000000 +0000
+++ src/dbCellMapping.cc
@@ -69,6 +69,13 @@ struct SortedCellIndexIterator
     return m_n - d.m_n;
   }
 
+ // XXX helper for gcc 8.0
+  SortedCellIndexIterator &operator--() 
+  {
+    --m_n;
+	return *this;
+  }
+
   SortedCellIndexIterator &operator++() 
   {
     ++m_n;
