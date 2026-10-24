--- cargo-crates/libc-0.2.65/src/unix/bsd/freebsdlike/dragonfly/mod.rs.orig	2019-09-16 18:34:34 UTC
+++ cargo-crates/libc-0.2.65/src/unix/bsd/freebsdlike/dragonfly/mod.rs
@@ -7,6 +7,8 @@ pub type nlink_t = u32;
 pub type blksize_t = i64;
 pub type clockid_t = ::c_ulong;
 
+pub type shmatt_t = ::c_uint;
+
 pub type c_long = i64;
 pub type c_ulong = u64;
 pub type time_t = i64;
@@ -20,6 +22,10 @@ pub type fsfilcnt_t = u64;
 pub type mqd_t = ::c_int;
 pub type sem_t = *mut sem;
 
+pub type key_t = ::c_long;
+pub type msglen_t = ::c_ulong;
+pub type msgqnum_t = ::c_ulong;
+
 #[cfg_attr(feature = "extra_traits", derive(Debug))]
 pub enum sem {}
 impl ::Copy for sem {}
@@ -237,6 +243,48 @@ s_no_extra_traits! {
         __unused3: *mut ::c_void        //actually a function pointer
     }
 
+    pub struct ipc_perm {
+        pub cuid: ::uid_t,
+        pub cgid: ::gid_t,
+        pub uid: ::uid_t,
+        pub gid: ::gid_t,
+        pub mode: ::mode_t,
+        pub seq: ::c_ushort,
+        pub key: ::key_t,
+    }
+
+    pub struct msqid_ds {
+        pub msg_perm: ::ipc_perm,
+        __unused1: *mut ::c_void,
+        __unused2: *mut ::c_void,
+        pub msg_cbytes: ::msglen_t,
+        pub msg_qnum: ::msgqnum_t,
+        pub msg_qbytes: ::msglen_t,
+        pub msg_lspid: ::pid_t,
+        pub msg_lrpid: ::pid_t,
+        pub msg_stime: ::time_t,
+	__unused3: ::c_long,
+        pub msg_rtime: ::time_t,
+	__unused4: ::c_long,
+        pub msg_ctime: ::time_t,
+	__unused5: ::c_long,
+	__unused6: ::c_long,
+	__unused7: ::c_long,
+	__unused8: ::c_long,
+	__unused9: ::c_long,
+    }
+
+    pub struct shmid_ds {
+        pub shm_perm: ::ipc_perm,
+        pub shm_segsz: ::size_t,
+        pub shm_lpid: ::pid_t,
+        pub shm_cpid: ::pid_t,
+        pub shm_nattch: ::shmatt_t,
+        pub shm_atime: ::time_t,
+        pub shm_dtime: ::time_t,
+        pub shm_ctime: ::time_t,
+	pub shm_internal: *mut ::c_void,
+    }
 }
 
 cfg_if! {
@@ -928,6 +976,23 @@ pub const NET_RT_FLAGS: ::c_int = 2;
 pub const NET_RT_IFLIST: ::c_int = 3;
 pub const NET_RT_MAXID: ::c_int = 4;
 
+// System V IPC
+pub const IPC_PRIVATE: ::key_t = 0;
+pub const IPC_CREAT: ::c_int = 0o1000;
+pub const IPC_EXCL: ::c_int = 0o2000;
+pub const IPC_NOWAIT: ::c_int = 0o4000;
+pub const IPC_RMID: ::c_int = 0;
+pub const IPC_SET: ::c_int = 1;
+pub const IPC_STAT: ::c_int = 2;
+pub const IPC_R: ::c_int = 0o400;
+pub const IPC_W: ::c_int = 0o200;
+pub const IPC_M: ::c_int = 0o10000;
+pub const MSG_NOERROR: ::c_int = 0o10000;
+pub const SHM_RDONLY: ::c_int = 0o10000;
+pub const SHM_RND: ::c_int = 0o20000;
+pub const SHM_R: ::c_int = 0o400;
+pub const SHM_W: ::c_int = 0o200;
+
 pub const SOMAXOPT_SIZE: ::c_int = 65536;
 
 pub const MSG_UNUSED09: ::c_int = 0x00000200;
@@ -1054,6 +1119,7 @@ f! {
 }
 
 extern "C" {
+    pub fn __errno_location() -> *mut ::c_int;
     pub fn setgrent();
     pub fn mprotect(
         addr: *mut ::c_void,
@@ -1067,6 +1133,30 @@ extern "C" {
         tp: *const ::timespec,
     ) -> ::c_int;
 
+    pub fn shmget(key: ::key_t, size: ::size_t, shmflg: ::c_int) -> ::c_int;
+    pub fn shmat(
+        shmid: ::c_int,
+        addr: *const ::c_void,
+        flag: ::c_int,
+    ) -> *mut ::c_void;
+    pub fn shmdt(shmaddr: *const ::c_void) -> ::c_int;
+    pub fn shmctl(
+        shmid: ::c_int,
+        cmd: ::c_int,
+        buf: *mut ::shmid_ds,
+    ) -> ::c_int;
+    pub fn msgctl(
+        msqid: ::c_int,
+        cmd: ::c_int,
+        buf: *mut ::msqid_ds,
+    ) -> ::c_int;
+    pub fn msgget(key: ::key_t, msgflg: ::c_int) -> ::c_int;
+    pub fn msgsnd(
+        msqid: ::c_int,
+        msgp: *const ::c_void,
+        msgsz: ::size_t,
+        msgflg: ::c_int,
+    ) -> ::c_int;
     pub fn setutxdb(_type: ::c_uint, file: *mut ::c_char) -> ::c_int;
 
     pub fn aio_waitcomplete(
