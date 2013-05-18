--- src/gst/parole-gst.c.intermediate	2013-05-18 10:57:04.904550000 +0000
+++ src/gst/parole-gst.c
@@ -1577,7 +1577,7 @@ parole_gst_missing_codec_dialog(ParoleGs
                             GTK_DIALOG_MODAL | GTK_DIALOG_DESTROY_WITH_PARENT,
 #if defined(__linux__)
                             GTK_MESSAGE_QUESTION,
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
                             GTK_MESSAGE_WARNING,
 #endif
                             GTK_BUTTONS_NONE,
@@ -1592,7 +1592,7 @@ parole_gst_missing_codec_dialog(ParoleGs
                             _("Install"), 
                             GTK_RESPONSE_ACCEPT,
                             NULL );
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     gtk_dialog_add_button( GTK_DIALOG(dialog), 
                             GTK_STOCK_OK,
                             GTK_RESPONSE_OK);
@@ -1602,7 +1602,7 @@ parole_gst_missing_codec_dialog(ParoleGs
 #if defined(__linux__)
                                              "Parole needs <b>%s</b> to play this file.\n"
                                              "It can be installed automatically.",
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
                                              "Parole needs <b>%s</b> to play this file.",
 #endif
                                              desc);
