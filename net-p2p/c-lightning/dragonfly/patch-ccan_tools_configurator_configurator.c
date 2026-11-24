On DragonFly BSD MINSIGSTKSZ is 8196 and it is required minimum value.
--- ccan/tools/configurator/configurator.c.orig
+++ ccan/tools/configurator/configurator.c
@@ -448,7 +448,11 @@
 	  NULL, NULL,
 	  "#include <ucontext.h>\n"
 	  "static int x = 0;\n"
+	  "#ifdef MINSIGSTKSZ\n"
+	  "static char stack[MINSIGSTKSZ];\n"
+	  "#else\n"
 	  "static char stack[2048];\n"
+	  "#endif\n"
 	  "static ucontext_t a, b;\n"
 	  "static void fn(void) {\n"
 	  "	x |= 2;\n"
@@ -471,7 +475,11 @@
 	  "#include <stddef.h>\n"
 	  "#include <ucontext.h>\n"
 	  "static int worked = 0;\n"
+	  "#ifdef MINSIGSTKSZ\n"
+	  "static char stack[MINSIGSTKSZ];\n"
+	  "#else\n"
 	  "static char stack[8192];\n"
+	  "#endif\n"
 	  "static ucontext_t a, b;\n"
 	  "static void fn(void *p, void *q) {\n"
 	  "	void *cp = &worked;\n"
