--- Cross/vm/sqVirtualMachine.c.orig	2011-10-10 11:54:29.000000000 +0000
+++ Cross/vm/sqVirtualMachine.c
@@ -487,7 +487,7 @@ struct VirtualMachine* sqGetInterpreterP
  */
 #define STDOUT_STACK_SZ 5
 static int stdoutStackIdx = -1;
-static FILE stdoutStack[STDOUT_STACK_SZ];
+/* static FILE stdoutStack[STDOUT_STACK_SZ]; */
 
 /* N.B. As of cygwin 1.5.25 fopen("crash.dmp","a") DOES NOT WORK!  crash.dmp
  * contains garbled output as if the file pointer gets set to the start of the
@@ -514,6 +514,9 @@ fopen_for_append(char *filename)
 void
 pushOutputFile(char *filenameOrStdioIndex)
 {
+	fprintf(stderr, "Push Output File disabled on DragonFly.\n");
+
+/*
 #ifndef STDOUT_FILENO
 # define STDOUT_FILENO 1
 # define STDERR_FILENO 2
@@ -538,11 +541,14 @@ pushOutputFile(char *filenameOrStdioInde
 	}
 	stdoutStack[++stdoutStackIdx] = *stdout;
 	*stdout = *output;
+*/
 }
 
 void
 popOutputFile()
 {
+	fprintf(stderr, "Pop Output File disabled on DragonFly.\n");
+/*
 	if (stdoutStackIdx < 0) {
 		fprintf(stderr,"output file stack is empty.\n");
 		return;
@@ -551,7 +557,7 @@ popOutputFile()
 	if (fileno(stdout) > STDERR_FILENO) {
 		/* as of Feb 2011 with fclose@@GLIBC_2.1 under e.g. CentOS 5.3, fclose
 		 * hangs in _IO_un_link_internal.  This hack avoids that.
-		 */
+		 *
 #if __linux__
 		close(fileno(stdout));
 #else
@@ -559,4 +565,5 @@ popOutputFile()
 #endif
 	}
 	*stdout = stdoutStack[stdoutStackIdx--];
+*/
 }
