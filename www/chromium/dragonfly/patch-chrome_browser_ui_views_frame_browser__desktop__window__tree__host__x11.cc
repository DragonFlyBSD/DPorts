--- chrome/browser/ui/views/frame/browser_desktop_window_tree_host_x11.cc.orig	2016-11-10 22:02:30.000000000 +0200
+++ chrome/browser/ui/views/frame/browser_desktop_window_tree_host_x11.cc
@@ -57,9 +57,11 @@ void BrowserDesktopWindowTreeHostX11::In
     const views::Widget::InitParams& params) {
   views::DesktopWindowTreeHostX11::Init(content_window, params);
 
+#ifndef GLOBAL_MENUBAR_DBUS_DUMMY
   // We have now created our backing X11 window. We now need to (possibly)
   // alert Unity that there's a menu bar attached to it.
   global_menu_bar_x11_.reset(new GlobalMenuBarX11(browser_view_, this));
+#endif
 }
 
 void BrowserDesktopWindowTreeHostX11::CloseNow() {
