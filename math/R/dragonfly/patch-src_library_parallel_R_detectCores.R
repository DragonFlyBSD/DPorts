--- src/library/parallel/R/detectCores.R.orig	2021-07-08 09:48:43.967386000 +0200
+++ src/library/parallel/R/detectCores.R	2021-07-08 09:49:00.497016000 +0200
@@ -37,6 +37,7 @@
                      darwin = if(logical) "/usr/sbin/sysctl -n hw.logicalcpu 2>/dev/null" else "/usr/sbin/sysctl -n hw.physicalcpu 2>/dev/null",
                      solaris = if(logical) "/usr/sbin/psrinfo -v | grep 'Status of.*processor' | wc -l" else "/bin/kstat -p -m cpu_info | grep :core_id | cut -f2 | uniq | wc -l",
                      freebsd = "/sbin/sysctl -n hw.ncpu 2>/dev/null",
+                     dragonfly = "/sbin/sysctl -n hw.ncpu 2>/dev/null",
                      openbsd = "/sbin/sysctl -n hw.ncpuonline 2>/dev/null")
             nm <- names(systems)
             m <- pmatch(nm, R.version$os); m <- nm[!is.na(m)]
