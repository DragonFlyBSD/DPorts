--- paexec/tasks.c.orig	2020-06-01 14:44:20 UTC
+++ paexec/tasks.c
@@ -67,7 +67,9 @@ static int tasks_cmp(task_t *a, task_t *
 static RB_HEAD(tasks_entries, task_struct) tasks = RB_INITIALIZER(&tasks);
 
 RB_PROTOTYPE(tasks_entries, task_struct, linkage, tasks_cmp)
+;
 RB_GENERATE(tasks_entries, task_struct, linkage, tasks_cmp)
+;
 
 int graph_mode  = 0;
 /* numeric task id to textual representation*/
