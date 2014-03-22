--- libcli/smbreadline/smbreadline.c.orig	2012-10-02 08:24:41.000000000 +0000
+++ libcli/smbreadline/smbreadline.c
@@ -141,7 +141,7 @@ char *smb_readline(const char *prompt, v
 
 #if HAVE_DECL_RL_EVENT_HOOK
 	if (callback)
-		rl_event_hook = (Function *)callback;
+		rl_event_hook = (rl_hook_func_t *)callback;
 #endif
 	ret = readline(prompt);
 	if (ret && *ret)
