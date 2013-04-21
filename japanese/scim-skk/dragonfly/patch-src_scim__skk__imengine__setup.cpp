--- src/scim_skk_imengine_setup.cpp.orig	2005-12-18 12:15:53.000000000 +0000
+++ src/scim_skk_imengine_setup.cpp
@@ -32,6 +32,7 @@
 #endif
 
 #include <vector>
+#include <cstring>
 
 #include <scim.h>
 #include <gtk/scimkeyselection.h>
@@ -800,7 +801,7 @@ setup_combo_value (GtkCombo *combo,
 
     for (unsigned int i = 0; data[i].label; i++) {
         list = g_list_append (list, (gpointer) _(data[i].label));
-        if (!strcmp (data[i].data, str.c_str ()))
+        if (!std::strcmp (data[i].data, str.c_str ()))
             defval = _(data[i].label);
     }
 
@@ -1071,7 +1072,7 @@ on_default_file_selection_clicked (GtkBu
 
             if (!fname) fname = "";
 
-            if (strcmp (fname, gtk_entry_get_text (GTK_ENTRY (data->entry))) != 0)
+            if (std::strcmp (fname, gtk_entry_get_text (GTK_ENTRY (data->entry))) != 0)
                 gtk_entry_set_text (GTK_ENTRY (data->entry), fname);
         }
 
@@ -1101,7 +1102,7 @@ on_default_key_selection_clicked (GtkBut
 
             if (!keys) keys = "";
 
-            if (strcmp (keys, gtk_entry_get_text (GTK_ENTRY (data->entry))) != 0)
+            if (std::strcmp (keys, gtk_entry_get_text (GTK_ENTRY (data->entry))) != 0)
                 gtk_entry_set_text (GTK_ENTRY (data->entry), keys);
         }
 
@@ -1124,7 +1125,7 @@ on_default_combo_changed (GtkEditable *e
     const char *label =  gtk_entry_get_text (GTK_ENTRY (editable));
 
     for (unsigned int i = 0; data[i].label; i++) {
-        if (label && !strcmp (_(data[i].label), label)) {
+        if (label && !std::strcmp (_(data[i].label), label)) {
             *str = data[i].data;
             __have_changed = true;
             break;
