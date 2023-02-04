--- src/qdoc/generator.h.orig	2022-12-12 17:11:50 UTC
+++ src/qdoc/generator.h
@@ -16,6 +16,22 @@
 
 QT_BEGIN_NAMESPACE
 
+//
+// XXX Horrible hack, untested!
+//
+// Our base libstdc++ does not have transform_reduce.
+// Taken from libcxx
+// License here: https://github.com/llvm/llvm-project/blob/main/libcxx/LICENSE.TXT
+template <class _InputIterator, class _Tp, class _BinaryOp, class _UnaryOp>
+_Tp
+transform_reduce(_InputIterator __first, _InputIterator __last,
+           _Tp __init,  _BinaryOp __b, _UnaryOp __u)
+{
+    for (; __first != __last; ++__first)
+        __init = __b(__init, __u(*__first));
+    return __init;
+}
+
 typedef QMultiMap<QString, Node *> NodeMultiMap;
 
 class Aggregate;
