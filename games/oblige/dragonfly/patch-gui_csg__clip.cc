--- gui/csg_clip.cc.orig	2017-08-06 03:12:11 UTC
+++ gui/csg_clip.cc
@@ -1054,7 +1054,7 @@ static void DoWriteClip(dclipnode_t & raw_clip, bool f
 {
 	if (flip)
 	{
-		std::swap(raw_clip.children[0], raw_clip.children[1]);
+		{ auto t = raw_clip.children[0]; raw_clip.children[0] = raw_clip.children[1]; raw_clip.children[1] = t; }
 	}
 
 	// fix endianness
