--- gui/g_quake2.cc.orig	2017-08-06 03:12:11 UTC
+++ gui/g_quake2.cc
@@ -650,7 +650,7 @@ static void Q2_WriteNode(quake_node_c *node)
 
 	if (flipped)
 	{
-		std::swap(raw_node.children[0], raw_node.children[1]);
+		{ auto t = raw_node.children[0]; raw_node.children[0] = raw_node.children[1]; raw_node.children[1] = t; }
 	}
 
 
@@ -881,7 +881,7 @@ static void Q2_Model_Nodes(quake_mapmodel_c *model, fl
 
 		if (flipped)
 		{
-			std::swap(raw_node.children[0], raw_node.children[1]);
+			{ auto t = raw_node.children[0]; raw_node.children[0] = raw_node.children[1]; raw_node.children[1] = t; }
 		}
 
 		raw_node.firstface = face_base + face;
