--- plugins/cpu/cpu.c.intermediate	2022-02-09 12:55:47.000000000 +0000
+++ plugins/cpu/cpu.c
@@ -25,7 +25,7 @@
  */
 
 
-#if defined __FreeBSD__
+#if defined __FreeBSD__ || defined __DragonFly__
 #include <sys/types.h>
 #include <sys/time.h>
 #include <sys/resource.h>
@@ -95,11 +95,12 @@ end:
     RET(TRUE);
 
 }
-#elif defined __FreeBSD__
+#elif defined __FreeBSD__ || defined __DragonFly__
 static int
 cpu_get_load(cpu_priv * c)
 {
-	static int	mib[2] = {-1, -1}, init = 0, j;
+	static int	mib[2] = {-1, -1}, init = 0;
+	static size_t	j;
 	long		ct[CPUSTATES];
 
 	gfloat		a      , b;
