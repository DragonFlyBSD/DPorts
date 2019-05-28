--- types/tablet_v2/wlr_tablet_v2_tool.c.orig	2019-05-03 15:55:46 UTC
+++ types/tablet_v2/wlr_tablet_v2_tool.c
@@ -76,6 +76,10 @@ static enum zwp_tablet_tool_v2_type tabl
 	}
 
 	assert(false && "Unreachable");
+#ifdef __DragonFly__
+	/* in case assert() is overriden or NDEBUG is set */
+	return 1;
+#endif
 }
 
 void destroy_tablet_tool_v2(struct wl_resource *resource) {
