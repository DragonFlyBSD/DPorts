--- core/Player.cc.orig	2018-04-02 13:44:48 UTC
+++ core/Player.cc
@@ -169,7 +169,7 @@ uint64_t Player::CurrentMs() const
     return impl->CurrentMs();
 }
 
-AudioMode Player::AudioMode() const
+enum AudioMode Player::AudioMode() const
 {
     return impl->AudioMode();
 }
