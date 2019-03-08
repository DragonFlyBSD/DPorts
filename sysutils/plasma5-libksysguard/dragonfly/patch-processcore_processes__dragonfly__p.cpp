--- processcore/processes_dragonfly_p.cpp.orig	2019-02-19 10:55:27 UTC
+++ processcore/processes_dragonfly_p.cpp
@@ -37,10 +37,6 @@
 #include <stdlib.h>
 #include <sched.h>
 
-#define PP(pp, field) ((pp)->kp_ ## field)
-#define LP(pp, field) ((pp)->kp_lwp.kl_ ## field)
-#define VP(pp, field) ((pp)->kp_vm_ ## field)
-
 namespace KSysGuard
 {
 
@@ -78,23 +74,23 @@ void ProcessesLocal::Private::readProcSt
     process->setGid(0);
     process->setTracerpid(-1);
 
-    process->setEuid(PP(p, uid));
-    process->setUid(PP(p, ruid));
-    process->setEgid(PP(p, svgid));
-    process->setGid(PP(p, rgid));
-    process->setName(QString(PP(p, comm)));
+    process->setEuid(p->kp_uid);
+    process->setUid(p->kp_ruid);
+    process->setEgid(p->kp_svgid);
+    process->setGid(p->kp_rgid);
+    process->setName(QString::fromUtf8(p->kp_comm ? p->kp_comm : "????"));
 }
 
 void ProcessesLocal::Private::readProcStat(struct kinfo_proc *p, Process *ps)
 {
-    ps->setUserTime(LP(p, uticks) / 10000);
-    ps->setSysTime((LP(p, sticks) + LP(p, iticks)) / 10000);
-    ps->setNiceLevel(PP(p, nice));
-    ps->setVmSize(VP(p, map_size) / 1024); /* convert to KiB */
-    ps->setVmRSS(VP(p, prssize) * getpagesize() / 1024); /* convert to KiB */
+    ps->setUserTime(p->kp_lwp.kl_uticks / 10000);
+    ps->setSysTime(p->kp_lwp.kl_sticks + p->kp_lwp.kl_iticks / 10000);
+    ps->setNiceLevel(p->kp_nice);
+    ps->setVmSize(p->kp_vm_map_size / 1024); /* convert to KiB */
+    ps->setVmRSS(p->kp_vm_prssize * getpagesize() / 1024); /* convert to KiB */
 
 // "idle","run","sleep","stop","zombie"
-    switch( LP(p, stat) ) {
+    switch(p->kp_lwp.kl_stat) {
       case LSRUN:
         ps->setStatus(Process::Running);
         break;
@@ -108,7 +104,7 @@ void ProcessesLocal::Private::readProcSt
         ps->setStatus(Process::OtherStatus);
         break;
     }
-    if (PP(p, stat) == SZOMB)
+    if (p->kp_stat == SZOMB)
         ps->setStatus(Process::Zombie);
 }
 
@@ -130,10 +126,10 @@ bool ProcessesLocal::Private::readProcCm
 
     if (sysctl(mib, 4, buf, &buflen, NULL, 0) == -1 || (buflen == 0))
         return false;
-    QString command = QString(buf);
+    QString command = QString::fromUtf8(buf);
 
     //cmdline separates parameters with the NULL character
-    command = command.replace('\0', ' ');
+    command = command.replace(QLatin1Char('\0'), QLatin1Char(' '));
     process->setCommand(command.trimmed());
 
     return true;
@@ -149,7 +145,7 @@ long ProcessesLocal::getParentPid(long p
     struct kinfo_proc p;
 
     if(d->readProc(pid, &p))
-        ppid = PP(&p, ppid);
+      ppid = p.kp_ppid;
 
     return ppid;
 }
@@ -194,8 +190,8 @@ QSet<long> ProcessesLocal::getAllPids( )
 
     for (num = 0; num < len / sizeof(struct kinfo_proc); num++)
     {
-        long pid = PP((&p[num]), pid);
-        long long ppid = PP((&p[num]), ppid);
+        long pid = p[num].kp_pid;
+        long long ppid = p[num].kp_ppid;
 
         //skip all process with parent id = 0 but init
         if(ppid <= 0 && pid != 1)
