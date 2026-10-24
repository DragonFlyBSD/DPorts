--- cargo-crates/quinn-udp-0.5.10/src/unix.rs.orig
+++ cargo-crates/quinn-udp-0.5.10/src/unix.rs
@@ -113,7 +113,7 @@
 
         // mac and ios do not support IP_RECVTOS on dual-stack sockets :(
         // older macos versions also don't have the flag and will error out if we don't ignore it
-        #[cfg(not(any(target_os = "openbsd", target_os = "netbsd", solarish)))]
+        #[cfg(not(any(target_os = "openbsd", target_os = "netbsd", target_os = "dragonfly", solarish)))]
         if is_ipv4 || !io.only_v6()? {
             if let Err(_err) =
                 set_socket_option(&*io, libc::IPPROTO_IP, libc::IP_RECVTOS, OPTION_ON)
@@ -452,7 +452,7 @@
     }
 }
 
-#[cfg(not(any(apple, target_os = "openbsd", target_os = "netbsd", solarish)))]
+#[cfg(not(any(apple, target_os = "openbsd", target_os = "netbsd", target_os = "dragonfly", solarish)))]
 fn recv(io: SockRef<'_>, bufs: &mut [IoSliceMut<'_>], meta: &mut [RecvMeta]) -> io::Result<usize> {
     let mut names = [MaybeUninit::<libc::sockaddr_storage>::uninit(); BATCH_SIZE];
     let mut ctrls = [cmsg::Aligned(MaybeUninit::<[u8; CMSG_LEN]>::uninit()); BATCH_SIZE];
@@ -519,7 +519,7 @@
     Ok(msg_count as usize)
 }
 
-#[cfg(any(target_os = "openbsd", target_os = "netbsd", solarish, apple_slow))]
+#[cfg(any(target_os = "openbsd", target_os = "netbsd", target_os = "dragonfly", solarish, apple_slow))]
 fn recv(io: SockRef<'_>, bufs: &mut [IoSliceMut<'_>], meta: &mut [RecvMeta]) -> io::Result<usize> {
     let mut name = MaybeUninit::<libc::sockaddr_storage>::uninit();
     let mut ctrl = cmsg::Aligned(MaybeUninit::<[u8; CMSG_LEN]>::uninit());
@@ -689,7 +689,7 @@
                 ecn_bits = cmsg::decode::<u8, libc::cmsghdr>(cmsg);
             },
             // FreeBSD uses IP_RECVTOS here, and we can be liberal because cmsgs are opt-in.
-            #[cfg(not(any(target_os = "openbsd", target_os = "netbsd", solarish)))]
+            #[cfg(not(any(target_os = "openbsd", target_os = "netbsd", target_os = "dragonfly", solarish)))]
             (libc::IPPROTO_IP, libc::IP_RECVTOS) => unsafe {
                 ecn_bits = cmsg::decode::<u8, libc::cmsghdr>(cmsg);
             },
