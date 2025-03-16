--- third_party/rust/quinn-udp/src/unix.rs.orig	Mon Sep 23 18:00:15 2024
+++ third_party/rust/quinn-udp/src/unix.rs	Tue Mar
@@ -60,6 +60,7 @@ impl UdpSocketState {
         let mut cmsg_platform_space = 0;
         if cfg!(target_os = "linux")
             || cfg!(target_os = "freebsd")
+            || cfg!(target_os = "dragonfly")
             || cfg!(target_os = "openbsd")
             || cfg!(target_os = "netbsd")
             || cfg!(target_os = "macos")
@@ -139,6 +140,7 @@ impl UdpSocketState {
         }
         #[cfg(any(
             target_os = "freebsd",
+            target_os = "dragonfly",
             target_os = "openbsd",
             target_os = "netbsd",
             target_os = "macos",
@@ -372,7 +374,7 @@ fn send(state: &UdpSocketState, io: SockRef<'_>, trans
     Ok(())
 }
 
-#[cfg(not(any(target_os = "macos", target_os = "ios", target_os = "openbsd")))]
+#[cfg(not(any(target_os = "macos", target_os = "ios", target_os = "openbsd", target_os = "dragonfly")))]
 fn recv(io: SockRef<'_>, bufs: &mut [IoSliceMut<'_>], meta: &mut [RecvMeta]) -> io::Result<usize> {
     let mut names = [MaybeUninit::<libc::sockaddr_storage>::uninit(); BATCH_SIZE];
     let mut ctrls = [cmsg::Aligned(MaybeUninit::<[u8; CMSG_LEN]>::uninit()); BATCH_SIZE];
@@ -409,7 +411,7 @@ fn recv(io: SockRef<'_>, bufs: &mut [IoSliceMut<'_>], 
     Ok(msg_count as usize)
 }
 
-#[cfg(any(target_os = "macos", target_os = "ios", target_os = "openbsd"))]
+#[cfg(any(target_os = "macos", target_os = "ios", target_os = "openbsd", target_os = "dragonfly"))]
 fn recv(io: SockRef<'_>, bufs: &mut [IoSliceMut<'_>], meta: &mut [RecvMeta]) -> io::Result<usize> {
     let mut name = MaybeUninit::<libc::sockaddr_storage>::uninit();
     let mut ctrl = cmsg::Aligned(MaybeUninit::<[u8; CMSG_LEN]>::uninit());
@@ -438,7 +440,7 @@ fn recv(io: SockRef<'_>, bufs: &mut [IoSliceMut<'_>], 
 ///
 /// It uses [`libc::syscall`] instead of [`libc::recvmmsg`]
 /// to avoid linking error on systems where libc does not contain `recvmmsg`.
-#[cfg(not(any(target_os = "macos", target_os = "ios", target_os = "openbsd")))]
+#[cfg(not(any(target_os = "macos", target_os = "ios", target_os = "openbsd", target_os = "dragonfly")))]
 unsafe fn recvmmsg_with_fallback(
     sockfd: libc::c_int,
     msgvec: *mut libc::mmsghdr,
@@ -481,7 +483,7 @@ unsafe fn recvmmsg_with_fallback(
 /// Fallback implementation of `recvmmsg` using `recvmsg`
 /// for systems which do not support `recvmmsg`
 /// such as Linux <2.6.33.
-#[cfg(not(any(target_os = "macos", target_os = "ios", target_os = "openbsd")))]
+#[cfg(not(any(target_os = "macos", target_os = "ios", target_os = "openbsd", target_os = "dragonfly")))]
 unsafe fn recvmmsg_fallback(
     sockfd: libc::c_int,
     msgvec: *mut libc::mmsghdr,
@@ -568,6 +570,7 @@ fn prepare_msg(
                 }
                 #[cfg(any(
                     target_os = "freebsd",
+                    target_os = "dragonfly",
                     target_os = "openbsd",
                     target_os = "netbsd",
                     target_os = "macos",
@@ -655,6 +658,7 @@ fn decode_recv(
             }
             #[cfg(any(
                 target_os = "freebsd",
+                target_os = "dragonfly",
                 target_os = "openbsd",
                 target_os = "netbsd",
                 target_os = "macos",
