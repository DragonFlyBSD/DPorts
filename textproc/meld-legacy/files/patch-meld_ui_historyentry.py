Silences few warnings in terminal.

--- meld/ui/historyentry.py.orig	2014-07-18 22:21:38.000000000 +0000
+++ meld/ui/historyentry.py
@@ -322,7 +322,8 @@ class HistoryFileEntry(gtk.HBox, gtk.Edi
 
     __gsignals__ = {
         "browse_clicked" : (gobject.SIGNAL_RUN_LAST, gobject.TYPE_NONE, []),
-        "activate" : (gobject.SIGNAL_RUN_LAST, gobject.TYPE_NONE, [])
+        "activate" : (gobject.SIGNAL_RUN_LAST, gobject.TYPE_NONE, []),
+        "changed" : (gobject.SIGNAL_RUN_LAST, gobject.TYPE_NONE, [])
     }
 
     __gproperties__ = {
