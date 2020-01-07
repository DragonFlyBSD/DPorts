Work around: assertion: z->z_Magic == ZALLOC_SLAB_MAGIC in _slabfree

Fron hdestroy(3):
 The comparison key (passed to hsearch() as item.key) must be allocated
 using malloc(3) if action is ENTER and hdestroy() is called.

--- src/ar.c.orig	2018-09-14 10:23:36 UTC
+++ src/ar.c
@@ -473,7 +473,7 @@ do_oper_extract (int oper, const char *a
 
   for (int cnt = 0; cnt < argc; ++cnt)
     {
-      ENTRY entry = { .key = argv[cnt], .data = &argv[cnt] };
+      ENTRY entry = { .key = strdup(argv[cnt]), .data = &argv[cnt] };
       if (hsearch (entry, ENTER) == NULL)
 	error (EXIT_FAILURE, errno,
 	       gettext ("cannot insert into hash table"));
@@ -517,7 +517,7 @@ do_oper_extract (int oper, const char *a
       if (!do_extract)
 	{
 	  ENTRY entry;
-	  entry.key = arhdr->ar_name;
+	  entry.key = strdup(arhdr->ar_name);
 	  ENTRY *res = hsearch (entry, FIND);
 	  if (res != NULL && (instance < 0 || instance-- == 0)
 	      && !found[(char **) res->data - argv])
@@ -918,7 +918,7 @@ do_oper_delete (const char *arfname, cha
 
   for (int cnt = 0; cnt < argc; ++cnt)
     {
-      ENTRY entry = { .key = argv[cnt], .data = &argv[cnt] };
+      ENTRY entry = { .key = strdup(argv[cnt]), .data = &argv[cnt] };
       if (hsearch (entry, ENTER) == NULL)
 	error (EXIT_FAILURE, errno,
 	       gettext ("cannot insert into hash table"));
@@ -942,7 +942,7 @@ do_oper_delete (const char *arfname, cha
       if (!do_delete)
 	{
 	  ENTRY entry;
-	  entry.key = arhdr->ar_name;
+	  entry.key = strdup(arhdr->ar_name);
 	  ENTRY *res = hsearch (entry, FIND);
 	  if (res != NULL && (instance < 0 || instance-- == 0)
 	      && !found[(char **) res->data - argv])
@@ -1123,7 +1123,7 @@ do_oper_insert (int oper, const char *ar
       for (int cnt = 0; cnt < argc; ++cnt)
 	{
 	  ENTRY entry;
-	  entry.key = full_path ? argv[cnt] : basename (argv[cnt]);
+	  entry.key = strdup(full_path ? argv[cnt] : basename (argv[cnt]));
 	  entry.data = &argv[cnt];
 	  if (hsearch (entry, ENTER) == NULL)
 	    error (EXIT_FAILURE, errno,
@@ -1169,7 +1169,7 @@ do_oper_insert (int oper, const char *ar
 	    }
 
 	  ENTRY entry;
-	  entry.key = arhdr->ar_name;
+	  entry.key = strdup(arhdr->ar_name);
 	  ENTRY *res = hsearch (entry, FIND);
 	  if (res != NULL && found[(char **) res->data - argv] == NULL)
 	    {
