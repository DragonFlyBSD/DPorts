--- hotspot/src/os_cpu/bsd_x86/vm/os_bsd_x86.cpp.intermediate	2021-03-12 12:47:52.000000000 +0000
+++ hotspot/src/os_cpu/bsd_x86/vm/os_bsd_x86.cpp
@@ -653,7 +653,7 @@ JVM_handle_bsd_signal(int sig,
           stub = SharedRuntime::continuation_for_implicit_exception(thread, pc, SharedRuntime::IMPLICIT_NULL);
       }
     } else if (thread->thread_state() == _thread_in_vm &&
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
                (sig == SIGBUS || sig == SIGSEGV) && 
 #else
                sig == SIGBUS && /* info->si_code == BUS_OBJERR && */
