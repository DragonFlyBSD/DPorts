--- a12/net/dir_cl.c.orig
+++ a12/net/dir_cl.c
@@ -587,7 +587,16 @@
 		for (size_t i = 1; i < SIGUNUSED; ++i)
 			signal(i, SIG_DFL);
 
+#ifdef __DragonFly__
+/* no execvpe(); execvp() takes the environment from environ */
+		{
+			extern char **environ;
+			environ = ctx->env;
+			execvp(ctx->bin, ctx->argv);
+		}
+#else
 		execvpe(ctx->bin, ctx->argv, ctx->env);
+#endif
 		exit(EXIT_FAILURE);
 	}
 
