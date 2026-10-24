--- src/gst/gstpipewiresrc.c.orig	2026-05-26 08:09:28 UTC
+++ src/gst/gstpipewiresrc.c
@@ -199,14 +199,16 @@ gst_pipewire_src_set_property (GObject * object, guint
       break;
 
     case PROP_PROVIDE_CLOCK:
-      gboolean provide = g_value_get_boolean (value);
-      GST_OBJECT_LOCK (pwsrc);
-      if (provide)
-        GST_OBJECT_FLAG_SET (pwsrc, GST_ELEMENT_FLAG_PROVIDE_CLOCK);
-      else
-        GST_OBJECT_FLAG_UNSET (pwsrc, GST_ELEMENT_FLAG_PROVIDE_CLOCK);
-      GST_OBJECT_UNLOCK (pwsrc);
-      break;
+      {
+        gboolean provide = g_value_get_boolean (value);
+        GST_OBJECT_LOCK (pwsrc);
+        if (provide)
+          GST_OBJECT_FLAG_SET (pwsrc, GST_ELEMENT_FLAG_PROVIDE_CLOCK);
+        else
+          GST_OBJECT_FLAG_UNSET (pwsrc, GST_ELEMENT_FLAG_PROVIDE_CLOCK);
+        GST_OBJECT_UNLOCK (pwsrc);
+        break;
+      }
 
     default:
       G_OBJECT_WARN_INVALID_PROPERTY_ID (object, prop_id, pspec);
@@ -278,12 +280,14 @@ gst_pipewire_src_get_property (GObject * object, guint
       break;
 
     case PROP_PROVIDE_CLOCK:
-      gboolean result;
-      GST_OBJECT_LOCK (pwsrc);
-      result = GST_OBJECT_FLAG_IS_SET (pwsrc, GST_ELEMENT_FLAG_PROVIDE_CLOCK);
-      GST_OBJECT_UNLOCK (pwsrc);
-      g_value_set_boolean (value, result);
-      break;
+      {
+        gboolean result;
+        GST_OBJECT_LOCK (pwsrc);
+        result = GST_OBJECT_FLAG_IS_SET (pwsrc, GST_ELEMENT_FLAG_PROVIDE_CLOCK);
+        GST_OBJECT_UNLOCK (pwsrc);
+        g_value_set_boolean (value, result);
+        break;
+      }
 
     default:
       G_OBJECT_WARN_INVALID_PROPERTY_ID (object, prop_id, pspec);
