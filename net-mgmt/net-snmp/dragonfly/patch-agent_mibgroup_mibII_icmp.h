--- agent/mibgroup/mibII/icmp.h.intermediate	2015-02-02 17:26:14 UTC
+++ agent/mibgroup/mibII/icmp.h
@@ -21,6 +21,7 @@ config_arch_require(openbsd4,  mibII/ker
 config_arch_require(openbsd5,  mibII/kernel_sysctl)
 config_arch_require(dragonfly2, mibII/kernel_sysctl)
 config_arch_require(dragonfly3, mibII/kernel_sysctl)
+config_arch_require(dragonfly4, mibII/kernel_sysctl)
 config_arch_require(darwin10,  mibII/kernel_sysctl)
 config_arch_require(darwin11,  mibII/kernel_sysctl)
 config_arch_require(darwin12,  mibII/kernel_sysctl)
