--- agent/mibgroup/mibII/icmp.h.orig	2017-10-01 12:13:50 UTC
+++ agent/mibgroup/mibII/icmp.h
@@ -22,6 +22,8 @@ config_arch_require(openbsd4,  mibII/ker
 config_arch_require(openbsd5,  mibII/kernel_sysctl)
 config_arch_require(dragonfly2, mibII/kernel_sysctl)
 config_arch_require(dragonfly3, mibII/kernel_sysctl)
+config_arch_require(dragonfly4, mibII/kernel_sysctl)
+config_arch_require(dragonfly5, mibII/kernel_sysctl)
 config_arch_require(darwin10,  mibII/kernel_sysctl)
 config_arch_require(darwin11,  mibII/kernel_sysctl)
 config_arch_require(darwin12,  mibII/kernel_sysctl)
