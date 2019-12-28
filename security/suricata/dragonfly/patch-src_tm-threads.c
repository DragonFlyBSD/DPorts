--- src/tm-threads.c.orig	2019-10-14 11:25:49 UTC
+++ src/tm-threads.c
@@ -883,7 +883,7 @@ TmSlot *TmSlotGetSlotForTM(int tm_id)
     return NULL;
 }
 
-#if !defined __CYGWIN__ && !defined OS_WIN32 && !defined __OpenBSD__ && !defined sun
+#if !defined __CYGWIN__ && !defined OS_WIN32 && !defined __OpenBSD__ && !defined sun && !defined __DragonFly__
 static int SetCPUAffinitySet(cpu_set_t *cs)
 {
 #if defined OS_FREEBSD
@@ -917,7 +917,7 @@ static int SetCPUAffinitySet(cpu_set_t *
  */
 static int SetCPUAffinity(uint16_t cpuid)
 {
-#if defined __OpenBSD__ || defined sun
+#if defined __OpenBSD__ || defined sun || defined __DragonFly__
     return 0;
 #else
     int cpu = (int)cpuid;
@@ -1051,7 +1051,7 @@ TmEcode TmThreadSetupOptions(ThreadVars
         SetCPUAffinity(tv->cpu_affinity);
     }
 
-#if !defined __CYGWIN__ && !defined OS_WIN32 && !defined __OpenBSD__ && !defined sun
+#if !defined __CYGWIN__ && !defined OS_WIN32 && !defined __OpenBSD__ && !defined sun && !defined __DragonFly__
     if (tv->thread_setup_flags & THREAD_SET_PRIORITY)
         TmThreadSetPrio(tv);
     if (tv->thread_setup_flags & THREAD_SET_AFFTYPE) {
