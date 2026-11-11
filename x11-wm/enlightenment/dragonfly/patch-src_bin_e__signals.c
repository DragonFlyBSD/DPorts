--- src/bin/e_signals.c.orig
+++ src/bin/e_signals.c
@@ -108,7 +108,9 @@
 #ifdef __linux__
       NAME(SEGV_BNDERR);
 #endif
+#ifdef SEGV_PKUERR
       NAME(SEGV_PKUERR);
+#endif
       NUMX(info->si_code);
     } break;
    case SIGILL:
