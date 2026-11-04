--- src/util/virnetdevip.c.orig	2026-10-01 09:02:52 UTC
+++ src/util/virnetdevip.c
@@ -390,7 +390,7 @@
         return -1;
     }
 
-# ifdef __FreeBSD__
+# if defined(__FreeBSD__) || defined(__DragonFly__)
     cmd = virCommandNew("ifconfig");
     virCommandAddArg(cmd, ifname);
     if (VIR_SOCKET_ADDR_IS_FAMILY(addr, AF_INET6))
@@ -431,7 +431,7 @@
 
     if (!(addrstr = virSocketAddrFormat(addr)))
         return -1;
-# ifdef __FreeBSD__
+# if defined(__FreeBSD__) || defined(__DragonFly__)
     cmd = virCommandNew("ifconfig");
     virCommandAddArg(cmd, ifname);
     if (VIR_SOCKET_ADDR_IS_FAMILY(addr, AF_INET6))
