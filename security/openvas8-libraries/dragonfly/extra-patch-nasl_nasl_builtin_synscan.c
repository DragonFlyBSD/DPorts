--- nasl/nasl_builtin_synscan.c.intermediate	2020-11-23 07:22:08.000000000 +0000
+++ nasl/nasl_builtin_synscan.c
@@ -803,7 +803,7 @@ plugin_run_synscan (lex_ctxt * lexic)
   if (islocalhost (dst))
     return NULL;
 
-    rtt = htonl (1 << 28);
+  rtt = htonl (1 << 28);
 
 #ifdef DEBUG
   printf ("RTT = 0x%.8x\n", ntohl (rtt));
