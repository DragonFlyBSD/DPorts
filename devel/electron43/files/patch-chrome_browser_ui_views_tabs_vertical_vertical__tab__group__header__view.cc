--- chrome/browser/ui/views/tabs/vertical/vertical_tab_group_header_view.cc.orig	2026-06-23 23:37:18 UTC
+++ chrome/browser/ui/views/tabs/vertical/vertical_tab_group_header_view.cc
@@ -329,7 +329,7 @@ void VerticalTabGroupHeaderView::OnMouseExited(const u
 }
 
 void VerticalTabGroupHeaderView::OnMouseExited(const ui::MouseEvent& event) {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Bypasses the synchronous IsMouseHovered() check which can be stale on Linux
   // Wayland/X11 due to asynchronous cursor updates during mouse exit events.
   SetEditorBubbleButtonVisibilityOnHover(/*is_hovered=*/false);
