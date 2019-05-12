--- src/gtkoptions.c.orig	2011-08-06 12:11:52 UTC
+++ src/gtkoptions.c
@@ -425,7 +425,11 @@ GtkWidget* gtk_options_dialog_new(GtkWid
 
   if(! (soundsystem = option_get(options->option_list,
 		                "SoundSystem", 0, NULL)) )
+#ifdef __DragonFly__
+	soundsystem = "<oss>";
+#else
 	soundsystem = "<pulseaudio>";
+#endif
 
   radiobutton = gtk_radio_button_new_with_label(NULL, _("Pulseaudio"));
   g_object_set_data(G_OBJECT(radiobutton), "choice", "<pulseaudio>");
