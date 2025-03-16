--- lxqt-session/src/procreaper.cpp.orig	Wed Apr 17 11:22:25 2024
+++ lxqt-session/src/procreaper.cpp	Sun Mar
@@ -34,7 +34,8 @@
 # else
 #  include <proc/readproc.h>
 # endif
-#elif defined(Q_OS_FREEBSD)
+#elif defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
+#include <sys/sysctl.h>
 #include <sys/procctl.h>
 #include <libutil.h>
 #include <sys/user.h>
@@ -49,6 +50,95 @@
 #include <signal.h>
 #include <sys/wait.h>
 
+/*-
+ * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
+ * 
+ * Copyright (c) 2007 Robert N. M. Watson
+ * Copyright (c) 2009 Ulf Lilleengen
+ * All rights reserved.
+ *
+ * Redistribution and use in source and binary forms, with or without
+ * modification, are permitted provided that the following conditions
+ * are met:
+ * 1. Redistributions of source code must retain the above copyright
+ *    notice, this list of conditions and the following disclaimer.
+ * 2. Redistributions in binary form must reproduce the above copyright
+ *    notice, this list of conditions and the following disclaimer in the
+ *    documentation and/or other materials provided with the distribution.
+ *
+ * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
+ * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
+ * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
+ * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
+ * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
+ * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
+ * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
+ * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+ * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
+ * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
+ * SUCH DAMAGE.
+ *
+ * $FreeBSD$
+ */
+
+/*
+ * XXX DPORTS: This is NOT okay but given the time I have it should work and be
+ * enough for now
+ */
+
+static int
+kinfo_proc_compare(const void *a, const void *b)
+{
+        int i;
+
+        i = ((const struct kinfo_proc *)a)->kp_pid -
+            ((const struct kinfo_proc *)b)->kp_pid;
+        if (i != 0)
+                return (i);
+        i = ((const struct kinfo_proc *)a)->kp_lwp.kl_tid -
+            ((const struct kinfo_proc *)b)->kp_lwp.kl_tid;
+        return (i);
+}
+
+static void
+kinfo_proc_sort(struct kinfo_proc *kipp, int count)
+{
+
+        qsort(kipp, count, sizeof(*kipp), kinfo_proc_compare);
+}
+
+struct kinfo_proc *
+kinfo_getallproc(int *cntp)
+{
+        struct kinfo_proc *kipp;
+        size_t len;
+        int mib[3];
+
+        mib[0] = CTL_KERN;
+        mib[1] = KERN_PROC;
+        mib[2] = KERN_PROC_ALL;
+
+        len = 0;
+        if (::sysctl(mib, nitems(mib), NULL, &len, NULL, 0) < 0)
+                return (NULL);
+
+        kipp = (struct kinfo_proc *)malloc(len);
+        if (kipp == NULL)
+                return (NULL);
+
+        if (::sysctl(mib, nitems(mib), kipp, &len, NULL, 0) < 0)
+                goto bad;
+        if (len % sizeof(*kipp) != 0)
+                goto bad;
+        *cntp = len / sizeof(*kipp);
+        kinfo_proc_sort(kipp, len / sizeof(*kipp));
+        return (kipp);
+bad:
+        *cntp = 0;
+        free(kipp);
+        return (NULL);
+}
+
 ProcReaper::ProcReaper()
     : mShouldRun{true}
 {
@@ -56,7 +146,7 @@ ProcReaper::ProcReaper()
     int result = prctl(PR_SET_CHILD_SUBREAPER, 1);
     if (result != 0)
         qCWarning(SESSION) << "Unable to set PR_SET_CHILD_SUBREAPER, " << result << " - " << strerror(errno);
-#elif defined(Q_OS_FREEBSD)
+#elif defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
     int result = procctl(P_PID, ::getpid(), PROC_REAP_ACQUIRE, nullptr);
     if (result != 0)
         qCWarning(SESSION) << "Unable to set PROC_REAP_ACQUIRE, " << result << " - " << strerror(errno);
@@ -141,15 +231,15 @@ void ProcReaper::stop(const std::set<int64_t> & exclud
     }
     ::closeproc(proc_dir);
 # endif
-#elif defined(Q_OS_FREEBSD)
+#elif defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
     int cnt = 0;
     if (kinfo_proc *proc_info = kinfo_getallproc(&cnt))
     {
         for (int i = 0; i < cnt; ++i)
         {
-            if (proc_info[i].ki_ppid == my_pid)
+            if (proc_info[i].kp_ppid == my_pid)
             {
-                children.push_back(proc_info[i].ki_pid);
+                children.push_back(proc_info[i].kp_pid);
             }
         }
         free(proc_info);
