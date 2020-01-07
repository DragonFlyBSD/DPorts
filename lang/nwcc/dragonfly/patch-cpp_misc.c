--- cpp/misc.c.orig	2014-08-17 16:28:11 UTC
+++ cpp/misc.c
@@ -307,6 +307,8 @@ get_default_sys(int *sys) {
 	*sys = OS_AIX;
 #elif defined __linux__
 	*sys = OS_LINUX;
+#elif defined __DragonFly__
+	*sys = OS_DRAGONFLYBSD;
 #elif defined __FreeBSD__
 	*sys = OS_FREEBSD;
 #elif defined __OpenBSD__
@@ -383,9 +385,10 @@ get_target_arch_by_name(int *arch, const
 static const struct system_info {
 	int		val;
 	const char	*name;
-	int		archs[8];
+	int		archs[9];
 } systems[] = {
 	{ OS_LINUX, "linux", { ARCH_POWER, ARCH_X86, ARCH_AMD64, ARCH_SPARC,0,0,0,0 } },
+	{ OS_DRAGONFLYBSD, "dragonfly", { ARCH_X86, ARCH_AMD64,0,0,0,0,0,0 } },
 	{ OS_FREEBSD, "freebsd", { ARCH_X86, ARCH_AMD64,0,0,0,0,0,0 } },
 	{ OS_OPENBSD, "openbsd", { ARCH_X86, ARCH_AMD64,0,0,0,0,0,0 } },
 	{ OS_NETBSD, "netbsd", { ARCH_X86,0,0,0,0,0,0,0 } },
@@ -611,6 +614,9 @@ sys_to_option(int val) {
 	case OS_LINUX:	
 		str = "linux";
 		break;
+	case OS_DRAGONFLYBSD:
+		str = "dragonfly";
+		break;
 	case OS_FREEBSD:
 		str = "freebsd";
 		break;
