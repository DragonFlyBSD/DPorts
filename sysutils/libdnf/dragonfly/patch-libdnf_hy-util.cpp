--- libdnf/hy-util.cpp.orig
+++ libdnf/hy-util.cpp
@@ -126,7 +126,7 @@
         char *modifier = un.machine + 5;
         while(isdigit(*modifier)) /* keep armv7, armv8, armv9, armv10, armv100, ... */
             modifier++;
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
         if (getauxval(AT_HWCAP) & HWCAP_ARM_VFP)
             *modifier++ = 'h';
         if ((atoi(un.machine+4) == 7) && (getauxval(AT_HWCAP) & HWCAP_ARM_NEON))
