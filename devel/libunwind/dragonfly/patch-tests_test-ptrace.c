--- tests/test-ptrace.c.orig	2025-08-25 12:33:28 UTC
+++ tests/test-ptrace.c
@@ -362,6 +362,10 @@ main (int argc, char **argv)
 	  ptrace (PT_SYSCALL, target_pid, (caddr_t)1, pending_sig);
 #elif HAVE_DECL_PTRACE_SYSCALL
 	  ptrace (PTRACE_SYSCALL, target_pid, 0, pending_sig);
+#elif defined(__DragonFly__)
+	  /* DragonFly's ptrace(2) has no PT_SYSCALL/PTRACE_SYSCALL
+	     request, so there is no syscall-stop trace mode: skip. */
+	  _exit (77);
 #else
 #error Syscall me
 #endif
