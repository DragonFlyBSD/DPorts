--- misc.c.orig	2014-08-17 16:28:11 UTC
+++ misc.c
@@ -383,9 +383,10 @@ static const struct system_info {
 	int		val;
 	const char	*name;
 	int		major;
-	int		archs[8];
+	int		archs[9];
 } systems[] = {
 	{ OS_LINUX, "linux", 1, { ARCH_POWER, ARCH_X86, ARCH_AMD64, ARCH_SPARC,ARCH_MIPS,0,0,0 } },
+	{ OS_DRAGONFLYBSD, "dragonfly", 0, { ARCH_X86, ARCH_AMD64,0,0,0,0,0,0 } },
 	{ OS_FREEBSD, "freebsd", 0, { ARCH_X86, ARCH_AMD64,0,0,0,0,0,0 } },
 	{ OS_OPENBSD, "openbsd", 0, { ARCH_X86, ARCH_AMD64,0,0,0,0,0,0 } },
 	{ OS_NETBSD, "netbsd", 0, { ARCH_X86,0,0,0,0,0,0,0 } },
