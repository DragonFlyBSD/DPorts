--- src/gui/callbacks.cpp.orig	2013-02-18 18:00:46.000000000 +0000
+++ src/gui/callbacks.cpp
@@ -104,13 +104,13 @@ void
 on_pcard_clicked                       (GtkButton       *button,
                                         gpointer         user_data)
 {
-  LOG("enter on_pcard_clicked with " << (int) user_data << std::endl);
+  LOG("enter on_pcard_clicked with " << (long) user_data << std::endl);
   HumanGuiPlayer* p = (HumanGuiPlayer*) theGame->getPlayer(Common::SOUTH);
   if (p == NULL) {
     return;
   }
 
-  p->setSelectedCard((int) user_data);
+  p->setSelectedCard((long) user_data);
   theGame->addEvent(Game::PAUSE_END);
   theGame->run();
 }
@@ -142,7 +142,7 @@ on_auction2_clicked                    (
                                         gpointer         user_data)
 {
   Player* p = theGame->getPlayer(Common::SOUTH);
-  p->assignBid((Common::Bid) ((int) user_data));
+  p->assignBid((Common::Bid) ((long) user_data));
 
   theGame->addEvent(Game::AUCTION_CONT);
   theGame->run();
@@ -202,9 +202,9 @@ on_bid_clicked                         (
   Player* p = theGame->getPlayer(Common::SOUTH);
 
   if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(t))) {
-    p->assignBid(Common::LONER, (Card::Suit) (int) user_data);
+    p->assignBid(Common::LONER, (Card::Suit) (long) user_data);
   } else {
-    p->assignBid(Common::PICKITUP, (Card::Suit) (int) user_data);
+    p->assignBid(Common::PICKITUP, (Card::Suit) (long) user_data);
   }
   
   theGame->addEvent(Game::AUCTION_CONT);
