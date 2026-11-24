--- sigsegv.c.orig
+++ sigsegv.c
@@ -91,7 +91,7 @@
     a2j_error("info.si_errno = %d", info->si_errno);
     a2j_error("info.si_code  = %d (%s)", info->si_code, si_codes[info->si_code]);
     a2j_error("info.si_addr  = %p", info->si_addr);
-#if !defined(__alpha__) && !defined(__ia64__) && !defined(__FreeBSD__) && !defined(__arm__) && !defined(__hppa__) && !defined(__sh__) && !defined(__aarch64__)
+#if !defined(__alpha__) && !defined(__ia64__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__arm__) && !defined(__hppa__) && !defined(__sh__) && !defined(__aarch64__)
     for(i = 0; i < NGREG; i++)
         a2j_error("reg[%02d]       = 0x" REGFORMAT, i,
 #if defined(__powerpc__) && !defined(__powerpc64__)
