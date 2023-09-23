diff --git third_party/angle/third_party/glmark2/src/waflib/Tools/c_config.py third_party/angle/third_party/glmark2/src/waflib/Tools/c_config.py
index 9c627c1cf6c..761f0fc8cc2 100644
--- third_party/angle/third_party/glmark2/src/waflib/Tools/c_config.py
+++ third_party/angle/third_party/glmark2/src/waflib/Tools/c_config.py
@@ -40,7 +40,7 @@ int main(int argc, char **argv) {
 	return (size_t) off < sizeof(%(type_name)s);
 }
 '''
-MACRO_TO_DESTOS={'__linux__':'linux','__GNU__':'gnu','__FreeBSD__':'freebsd','__NetBSD__':'netbsd','__OpenBSD__':'openbsd','__sun':'sunos','__hpux':'hpux','__sgi':'irix','_AIX':'aix','__CYGWIN__':'cygwin','__MSYS__':'cygwin','_UWIN':'uwin','_WIN64':'win32','_WIN32':'win32','__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__':'darwin','__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__':'darwin','__QNX__':'qnx','__native_client__':'nacl'}
+MACRO_TO_DESTOS={'__linux__':'linux','__GNU__':'gnu','__DragonFly__':'dragonfly','__FreeBSD__':'freebsd','__NetBSD__':'netbsd','__OpenBSD__':'openbsd','__sun':'sunos','__hpux':'hpux','__sgi':'irix','_AIX':'aix','__CYGWIN__':'cygwin','__MSYS__':'cygwin','_UWIN':'uwin','_WIN64':'win32','_WIN32':'win32','__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__':'darwin','__ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__':'darwin','__QNX__':'qnx','__native_client__':'nacl'}
 MACRO_TO_DEST_CPU={'__x86_64__':'x86_64','__amd64__':'x86_64','__i386__':'x86','__ia64__':'ia','__mips__':'mips','__sparc__':'sparc','__alpha__':'alpha','__aarch64__':'aarch64','__thumb__':'thumb','__arm__':'arm','__hppa__':'hppa','__powerpc__':'powerpc','__ppc__':'powerpc','__convex__':'convex','__m68k__':'m68k','__s390x__':'s390x','__s390__':'s390','__sh__':'sh','__xtensa__':'xtensa',}
 @conf
 def parse_flags(self,line,uselib_store,env=None,force_static=False,posix=None):
