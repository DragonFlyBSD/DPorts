--- src/lib/Game.cpp.orig	2013-02-18 17:43:40.000000000 +0000
+++ src/lib/Game.cpp
@@ -60,7 +60,7 @@ void Game::run() {
   while (g_slist_length(itsEventList) != 0) {
     /* gcc doesn't like conversion from void* to Event so hack around
        it */
-    Event ev = (Event) (unsigned int) g_slist_nth_data(itsEventList, 0);
+    Event ev = (Event) (unsigned long) g_slist_nth_data(itsEventList, 0);
     itsEventList = g_slist_remove(itsEventList, (gpointer) ev);
 
     processEvent(ev);
