--- templates/defaulttags/cycle.h.orig	2022-11-14 15:03:45 UTC
+++ templates/defaulttags/cycle.h
@@ -40,9 +40,9 @@ Cycles endlessly over elements.
 template <typename T> class RingIterator
 {
 public:
-  RingIterator<T>() {}
+  RingIterator() {}
 
-  RingIterator<T>(const QList<T> &list)
+  RingIterator(const QList<T> &list)
       : m_begin(list.constBegin()), m_it(list.constBegin()),
         m_end(list.constEnd())
   {
