On DragonFly BSD MINSIGSTKSZ is 8196 and it is required minimum value.

--- ccan/tools/configurator/configurator.c.orig	2019-12-16 20:25:35 UTC
+++ ccan/tools/configurator/configurator.c
@@ -445,7 +445,11 @@ static const struct test base_tests[] =
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
@@ -468,7 +472,11 @@ static const struct test base_tests[] =
 	  "#include <stddef.h>\n"
 	  "#include <ucontext.h>\n"
 	  "static int worked = 0;\n"
+	  "#ifdef MINSIGSTKSZ\n"
+	  "static char stack[MINSIGSTKSZ];\n"
+	  "#else\n"
 	  "static char stack[1024];\n"
+	  "#endif\n"
 	  "static ucontext_t a, b;\n"
 	  "static void fn(void *p, void *q) {\n"
 	  "	void *cp = &worked;\n"
