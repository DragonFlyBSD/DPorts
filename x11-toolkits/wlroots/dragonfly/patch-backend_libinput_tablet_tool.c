--- backend/libinput/tablet_tool.c.orig	2019-05-16 10:18:43.020521000 +0300
+++ backend/libinput/tablet_tool.c	2019-05-16 10:15:44.249504000 +0300
@@ -116,6 +116,12 @@ static enum wlr_tablet_tool_type wlr_typ
 	}
 
 	assert(false && "UNREACHABLE");
+
+	/*
+	 * false and hoc hack: just to prevent build error:
+	 *   control reaches end of non-void function
+	 */
+	return LIBINPUT_TABLET_TOOL_TYPE_MOUSE;
 }
 
 static struct wlr_libinput_tablet_tool *get_wlr_tablet_tool(
