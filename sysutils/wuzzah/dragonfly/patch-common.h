--- common.h.orig	2003-02-18 04:00:49.000000000 +0200
+++ common.h
@@ -29,7 +29,9 @@ typedef struct wuzzah_config {
 
 extern wuzzah_config_t g_config;
 
+#ifndef __DragonFly__
 extern int errno;
+#endif
 
 void process_args(int ac, char *av[], wuzzah_config_t *conf);
 int string_to_argv(const char *str, char **av[]);
