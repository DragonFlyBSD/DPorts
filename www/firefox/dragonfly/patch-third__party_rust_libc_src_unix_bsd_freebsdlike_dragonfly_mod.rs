--- third_party/rust/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs.orig	Mon Sep 23 18:00:15 2024
+++ third_party/rust/libc/src/unix/bsd/freebsdlike/dragonfly/mod.rs	Mon Mar
@@ -1159,6 +1159,8 @@ pub const IFF_STATICARP: ::c_int = 0x80000; // static 
 pub const IFF_NPOLLING: ::c_int = 0x100000; // interface is in polling mode
 pub const IFF_IDIRECT: ::c_int = 0x200000; // direct input
 
+pub const IP_RECVTOS: ::c_int = 68;
+
 //
 // sys/netinet/in.h
 // Protocols (RFC 1700)
