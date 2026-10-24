--- types/wlr_linux_dmabuf_v1.c.orig	2026-07-07 21:46:09 UTC
+++ types/wlr_linux_dmabuf_v1.c
@@ -51,7 +51,7 @@ struct wlr_linux_dmabuf_feedback_v1_table_entry {
 	uint64_t modifier;
 };
 
-static_assert(sizeof(struct wlr_linux_dmabuf_feedback_v1_table_entry) == 16,
+_Static_assert(sizeof(struct wlr_linux_dmabuf_feedback_v1_table_entry) == 16,
 	"Expected wlr_linux_dmabuf_feedback_v1_table_entry to be tightly packed");
 
 struct wlr_linux_dmabuf_v1_surface {
