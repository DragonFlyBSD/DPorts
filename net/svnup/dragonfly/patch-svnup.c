No pun intended

--- svnup.c.orig	2014-11-22 17:28:04.000000000 +0200
+++ svnup.c
@@ -56,6 +56,9 @@
 #define COMMAND_BUFFER 32768
 #define COMMAND_BUFFER_THRESHOLD 32000
 
+#ifndef MAXNAMLEN
+#define MAXNAMLEN 255
+#endif
 
 typedef struct {
 	int       socket_descriptor;
@@ -166,12 +169,12 @@ tree_node_free(struct tree_node *node)
 
 
 static RB_HEAD(tree1, tree_node) known_files = RB_INITIALIZER(&known_files);
-RB_PROTOTYPE(tree1, tree_node, link, tree_node_compare)
-RB_GENERATE(tree1, tree_node, link, tree_node_compare)
+RB_PROTOTYPE(tree1, tree_node, link, tree_node_compare);
+RB_GENERATE(tree1, tree_node, link, tree_node_compare);
 
 static RB_HEAD(tree2, tree_node) local_files = RB_INITIALIZER(&local_files);
-RB_PROTOTYPE(tree2, tree_node, link, tree_node_compare)
-RB_GENERATE(tree2, tree_node, link, tree_node_compare)
+RB_PROTOTYPE(tree2, tree_node, link, tree_node_compare);
+RB_GENERATE(tree2, tree_node, link, tree_node_compare);
 
 
 /*
