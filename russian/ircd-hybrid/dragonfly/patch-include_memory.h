--- include/memory.h.intermediate	2015-03-21 11:02:13 UTC
+++ include/memory.h
@@ -46,47 +46,5 @@ extern void *MyRealloc(void *x, size_t y
 extern void MyFree(void *x);
 extern void _DupString(char **x, const char *y);
 
-/* forte (and maybe others) don't like double declarations, 
- * so we don't declare the inlines unless GNUC
- */
-#if defined(__GNUC__) && !defined(__clang__)
-extern inline void *
-MyMalloc(size_t size)
-{
-  void *ret = calloc(1, size);
-
-  if (ret == NULL)
-    outofmemory();
-  return(ret);
-}
-
-extern inline void *
-MyRealloc(void *x, size_t y)
-{
-  void *ret = realloc(x, y);
-
-  if (ret == NULL)
-    outofmemory();
-  return(ret);    
-}
-
-extern inline void
-MyFree(void *x)
-{
-  if (x != NULL)
-    free(x);
-}
-
-extern inline void
-_DupString(char **x, const char *y)
-{
-  (*x) = malloc(strlen(y) + 1);
-
-  if (x == NULL)
-    outofmemory();
-  strcpy((*x), y); 
-}
-#endif /* __GNUC__ */
-
 #define DupString(x,y) _DupString(&x, y)
 #endif /* _I_MEMORY_H */
