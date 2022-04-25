--- src/filewidgets/kurlnavigator.cpp.orig	2022-03-05 13:02:22 UTC
+++ src/filewidgets/kurlnavigator.cpp
@@ -695,6 +695,23 @@ void KUrlNavigatorPrivate::updateButtons
     updateButtonVisibility();
 }
 
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
+
 void KUrlNavigatorPrivate::updateButtonVisibility()
 {
     if (m_editable) {
@@ -722,7 +739,7 @@ void KUrlNavigatorPrivate::updateButtonV
         return button->minimumWidth();
     };
     // Check whether buttons must be hidden at all...
-    const int requiredButtonWidth = std::transform_reduce(m_navButtons.cbegin(), m_navButtons.cend(), 0, std::plus<>(), MinWidth);
+    const int requiredButtonWidth = transform_reduce(m_navButtons.cbegin(), m_navButtons.cend(), 0, std::plus<>(), MinWidth);
 
     if (requiredButtonWidth > availableWidth) {
         // At least one button must be hidden. This implies that the
