--- gui/g_quake3.cc.orig	2017-08-06 03:12:11 UTC
+++ gui/g_quake3.cc
@@ -965,7 +965,7 @@ static void Q3_WriteNode(quake_node_c *node)
 
 	if (flipped)
 	{
-		std::swap(raw_node.children[0], raw_node.children[1]);
+		{ auto t = raw_node.children[0]; raw_node.children[0] = raw_node.children[1]; raw_node.children[1] = t; }
 	}
 
 
