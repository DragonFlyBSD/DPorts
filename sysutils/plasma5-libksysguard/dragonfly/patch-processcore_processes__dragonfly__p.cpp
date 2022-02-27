--- processcore/processes_dragonfly_p.cpp.orig	2022-01-04 09:00:46 UTC
+++ processcore/processes_dragonfly_p.cpp
@@ -4,6 +4,7 @@
 
     SPDX-License-Identifier: LGPL-2.0-or-later
 */
+#include <sys/user.h>
 
 #include "process.h"
 #include "processes_local_p.h"
@@ -24,10 +25,6 @@
 #include <sys/user.h>
 #include <unistd.h>
 
-#define PP(pp, field) ((pp)->kp_##field)
-#define LP(pp, field) ((pp)->kp_lwp.kl_##field)
-#define VP(pp, field) ((pp)->kp_vm_##field)
-
 namespace KSysGuard
 {
 class ProcessesLocal::Private
@@ -68,23 +65,23 @@ void ProcessesLocal::Private::readProcSt
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
+    ps->setSysTime((p->kp_lwp.kl_sticks + p->kp_lwp.kl_iticks) / 10000);
+    ps->setNiceLevel(p->kp_nice);
+    ps->setVmSize(p->kp_vm_map_size / 1024); /* convert to KiB */
+    ps->setVmRSS(p->kp_vm_prssize * getpagesize() / 1024); /* convert to KiB */
 
     // "idle","run","sleep","stop","zombie"
-    switch (LP(p, stat)) {
+    switch (p->kp_lwp.kl_stat) {
     case LSRUN:
         ps->setStatus(Process::Running);
         break;
@@ -98,7 +95,7 @@ void ProcessesLocal::Private::readProcSt
         ps->setStatus(Process::OtherStatus);
         break;
     }
-    if (PP(p, stat) == SZOMB)
+    if (p->kp_stat == SZOMB)
         ps->setStatus(Process::Zombie);
 }
 
@@ -120,10 +117,10 @@ bool ProcessesLocal::Private::readProcCm
 
     if (sysctl(mib, 4, buf, &buflen, NULL, 0) == -1 || (buflen == 0))
         return false;
-    QString command = QString(buf);
+    QString command = QString::fromUtf8(buf);
 
     // cmdline separates parameters with the NULL character
-    command.replace('\0', ' ');
+    command.replace(QLatin1Char('\0'), QLatin1Char(' '));
     process->setCommand(command.trimmed());
 
     return true;
@@ -140,7 +137,7 @@ long ProcessesLocal::getParentPid(long p
     struct kinfo_proc p;
 
     if (d->readProc(pid, &p))
-        ppid = PP(&p, ppid);
+        ppid = p.kp_ppid;
 
     return ppid;
 }
@@ -184,8 +181,8 @@ QSet<long> ProcessesLocal::getAllPids()
     }
 
     for (num = 0; num < len / sizeof(struct kinfo_proc); num++) {
-        long pid = PP((&p[num]), pid);
-        long long ppid = PP((&p[num]), ppid);
+        long pid = p[num].kp_pid;
+        long long ppid = p[num].kp_ppid;
 
         // skip all process with parent id = 0 but init
         if (ppid <= 0 && pid != 1)
