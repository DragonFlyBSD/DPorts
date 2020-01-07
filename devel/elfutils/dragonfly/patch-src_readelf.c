- Line base:                      251
+ Line base:                      -5

also qsort_r()

--- src/readelf.c.intermediate	2020-01-06 10:59:33.000000000 +0000
+++ src/readelf.c
@@ -4788,7 +4788,11 @@ listptr_base (struct listptr *p)
 }
 
 static int
+#if defined(__DragonFly__)
+compare_listptr (void *arg, const void *a, const void *b)
+#else
 compare_listptr (const void *a, const void *b, void *arg)
+#endif
 {
   const char *name = arg;
   struct listptr *p1 = (void *) a;
@@ -4900,8 +4904,13 @@ static void
 sort_listptr (struct listptr_table *table, const char *name)
 {
   if (table->n > 0)
+#if defined(__DragonFly__)
+    qsort_r (table->table, table->n, sizeof table->table[0],
+	     (void *) name, &compare_listptr);
+#else
     qsort_r (table->table, table->n, sizeof table->table[0],
 	     &compare_listptr, (void *) name);
+#endif
 }
 
 static bool
@@ -8288,7 +8297,7 @@ print_debug_line_section (Dwfl_Module *d
       uint_fast8_t default_is_stmt = *linep++;
 
       /* Now the line base.  */
-      int_fast8_t line_base = *linep++;
+      int_fast8_t line_base = (const char)*linep++;
 
       /* And the line range.  */
       uint_fast8_t line_range = *linep++;
