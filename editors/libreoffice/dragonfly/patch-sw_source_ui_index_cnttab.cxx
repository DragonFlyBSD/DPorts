--- sw/source/ui/index/cnttab.cxx.orig	2019-08-06 17:26:35 UTC
+++ sw/source/ui/index/cnttab.cxx
@@ -1554,7 +1554,7 @@ void SwTOXEdit::AdjustSize()
 {
     auto nWidth = m_xEntry->get_pixel_size(GetText()).Width();
     float fChars = nWidth / m_xEntry->get_approximate_digit_width();
-    m_xEntry->set_width_chars(std::max(1.0f, ceil(fChars)));
+    m_xEntry->set_width_chars(std::max(1.0f, (float)ceil(fChars)));
 }
 
 class SwTOXButton : public SwTOXWidget
