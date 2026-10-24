--- chrome/browser/ui/views/tabs/projects/projects_panel_thread_item_view.cc.orig	2026-06-23 23:37:18 UTC
+++ chrome/browser/ui/views/tabs/projects/projects_panel_thread_item_view.cc
@@ -117,7 +117,7 @@ void ProjectsPanelThreadItemView::OnMouseExited(const 
 }
 
 void ProjectsPanelThreadItemView::OnMouseExited(const ui::MouseEvent& event) {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   // Bypasses the synchronous IsMouseHovered() check which can be stale on Linux
   // Wayland/X11 due to asynchronous cursor updates during mouse exit events.
   UpdateHoverStateForced(/*is_hovered=*/false);
