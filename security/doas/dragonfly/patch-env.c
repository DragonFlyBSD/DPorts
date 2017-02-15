--- env.c.orig	2017-02-14 23:32:32.947014000 +0100
+++ env.c	2017-02-14 23:33:45.766652000 +0100
@@ -49,6 +49,9 @@
 {
 	return strcmp(a->key, b->key);
 }
+#ifdef __DragonFly__
+RB_PROTOTYPE_STATIC(envtree, envnode, node, envcmp);
+#endif
 RB_GENERATE_STATIC(envtree, envnode, node, envcmp)
 
 struct env *createenv(char **);
