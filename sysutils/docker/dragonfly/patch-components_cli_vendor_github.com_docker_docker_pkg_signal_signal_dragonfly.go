--- components/cli/vendor/github.com/docker/docker/pkg/signal/signal_dragonfly.go.orig	1970-01-01 01:00:00.000000000 +0100
+++ components/cli/vendor/github.com/docker/docker/pkg/signal/signal_dragonfly.go	2020-07-16 15:12:00.458390000 +0200
@@ -0,0 +1,42 @@
+package signal // import "github.com/docker/docker/pkg/signal"
+
+import (
+	"syscall"
+)
+
+// SignalMap is a map of FreeBSD signals.
+var SignalMap = map[string]syscall.Signal{
+	"ABRT":   syscall.SIGABRT,
+	"ALRM":   syscall.SIGALRM,
+	"BUF":    syscall.SIGBUS,
+	"CHLD":   syscall.SIGCHLD,
+	"CONT":   syscall.SIGCONT,
+	"EMT":    syscall.SIGEMT,
+	"FPE":    syscall.SIGFPE,
+	"HUP":    syscall.SIGHUP,
+	"ILL":    syscall.SIGILL,
+	"INFO":   syscall.SIGINFO,
+	"INT":    syscall.SIGINT,
+	"IO":     syscall.SIGIO,
+	"IOT":    syscall.SIGIOT,
+	"KILL":   syscall.SIGKILL,
+	"PIPE":   syscall.SIGPIPE,
+	"PROF":   syscall.SIGPROF,
+	"QUIT":   syscall.SIGQUIT,
+	"SEGV":   syscall.SIGSEGV,
+	"STOP":   syscall.SIGSTOP,
+	"SYS":    syscall.SIGSYS,
+	"TERM":   syscall.SIGTERM,
+	"THR":    syscall.SIGTHR,
+	"TRAP":   syscall.SIGTRAP,
+	"TSTP":   syscall.SIGTSTP,
+	"TTIN":   syscall.SIGTTIN,
+	"TTOU":   syscall.SIGTTOU,
+	"URG":    syscall.SIGURG,
+	"USR1":   syscall.SIGUSR1,
+	"USR2":   syscall.SIGUSR2,
+	"VTALRM": syscall.SIGVTALRM,
+	"WINCH":  syscall.SIGWINCH,
+	"XCPU":   syscall.SIGXCPU,
+	"XFSZ":   syscall.SIGXFSZ,
+}
