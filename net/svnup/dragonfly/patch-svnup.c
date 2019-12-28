No pun intended

--- svnup.c.orig	2019-10-27 17:07:44 UTC
+++ svnup.c
@@ -56,6 +56,9 @@
 #define COMMAND_BUFFER 32768
 #define COMMAND_BUFFER_THRESHOLD 32000
 
+#ifndef MAXNAMLEN
+#define MAXNAMLEN 255
+#endif
 
 typedef struct {
 	int       socket_descriptor;
@@ -166,16 +169,16 @@ tree_node_free(struct tree_node *node)
 
 
 static RB_HEAD(tree_known_files, tree_node) known_files = RB_INITIALIZER(&known_files);
-RB_PROTOTYPE(tree_known_files, tree_node, link, tree_node_compare)
-RB_GENERATE(tree_known_files, tree_node, link, tree_node_compare)
+RB_PROTOTYPE(tree_known_files, tree_node, link, tree_node_compare);
+RB_GENERATE(tree_known_files, tree_node, link, tree_node_compare);
 
 static RB_HEAD(tree_local_files, tree_node) local_files = RB_INITIALIZER(&local_files);
-RB_PROTOTYPE(tree_local_files, tree_node, link, tree_node_compare)
-RB_GENERATE(tree_local_files, tree_node, link, tree_node_compare)
+RB_PROTOTYPE(tree_local_files, tree_node, link, tree_node_compare);
+RB_GENERATE(tree_local_files, tree_node, link, tree_node_compare);
 
 static RB_HEAD(tree_local_directories, tree_node) local_directories = RB_INITIALIZER(&local_directories);
-RB_PROTOTYPE(tree_local_directories, tree_node, link, tree_node_compare)
-RB_GENERATE(tree_local_directories, tree_node, link, tree_node_compare)
+RB_PROTOTYPE(tree_local_directories, tree_node, link, tree_node_compare);
+RB_GENERATE(tree_local_directories, tree_node, link, tree_node_compare);
 
 
 /*
