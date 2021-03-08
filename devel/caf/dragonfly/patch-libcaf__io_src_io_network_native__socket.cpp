--- libcaf_io/src/io/network/native_socket.cpp.intermediate	2021-03-08 06:09:11.000000000 +0000
+++ libcaf_io/src/io/network/native_socket.cpp
@@ -84,7 +84,7 @@ const int ec_interrupted_syscall = EINTR
 #endif
 
 // Platform-dependent setup for suppressing SIGPIPE.
-#if defined(CAF_MACOS) || defined(CAF_IOS) || defined(__FreeBSD__)
+#if defined(CAF_MACOS) || defined(CAF_IOS) || defined(__FreeBSD__) || defined(__DragonFly__)
 // Set the SO_NOSIGPIPE socket option on macOS, iOS and FreeBSD.
 const int no_sigpipe_socket_flag = SO_NOSIGPIPE;
 const int no_sigpipe_io_flag = 0;
