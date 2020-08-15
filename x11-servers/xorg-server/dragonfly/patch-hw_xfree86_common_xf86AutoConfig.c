Auto probe scfb too (should bailout on non uefi now)

--- hw/xfree86/common/xf86AutoConfig.c.intermediate
+++ hw/xfree86/common/xf86AutoConfig.c
@@ -304,7 +304,7 @@ listPossibleVideoDrivers(XF86MatchedDriv
     xf86AddMatchedDriver(md, "wsfb");
 #elif defined(__linux__)
     xf86AddMatchedDriver(md, "fbdev");
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
     xf86AddMatchedDriver(md, "scfb");
 #endif
 #endif                          /* !__sun */
