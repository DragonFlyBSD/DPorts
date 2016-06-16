--- paexec/tasks.c.orig	2014-08-14 08:47:54.000000000 +0300
+++ paexec/tasks.c
@@ -66,8 +66,8 @@ static int tasks_cmp (task_t *a, task_t
 
 static RB_HEAD (tasks_entries, task_struct) tasks = RB_INITIALIZER(&tasks);
 
-RB_PROTOTYPE (tasks_entries, task_struct, linkage, tasks_cmp)
-RB_GENERATE (tasks_entries, task_struct, linkage, tasks_cmp)
+RB_PROTOTYPE (tasks_entries, task_struct, linkage, tasks_cmp);
+RB_GENERATE (tasks_entries, task_struct, linkage, tasks_cmp);
 
 int graph_mode  = 0;
 /* numeric task id to textual representation*/
