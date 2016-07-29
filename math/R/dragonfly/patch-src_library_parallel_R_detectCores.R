--- src/library/parallel/R/detectCores.R.orig	2016-03-16 23:02:49 UTC
+++ src/library/parallel/R/detectCores.R
@@ -35,6 +35,7 @@ detectCores <-
                      darwin = if(logical) "/usr/sbin/sysctl -n hw.logicalcpu 2>/dev/null" else "/usr/sbin/sysctl -n hw.physicalcpu 2>/dev/null",
                      solaris = if(logical) "/usr/sbin/psrinfo -v | grep 'Status of.*processor' | wc -l" else "/bin/kstat -p -m cpu_info | grep :core_id | cut -f2 | uniq | wc -l",
                      freebsd = "/sbin/sysctl -n hw.ncpu 2>/dev/null",
+                     dragonfly = "/sbin/sysctl -n hw.ncpu 2>/dev/null",
                      openbsd = "/sbin/sysctl -n hw.ncpu 2>/dev/null",
                      irix  = c("hinv | grep Processors | sed 's: .*::'", "hinv | grep '^Processor '| wc -l"))
             for (i in seq(systems))
