--- rtl/unix/ipc.pp.orig	2012-09-04 15:01:08.000000000 +0000
+++ rtl/unix/ipc.pp
@@ -46,7 +46,7 @@ Type
 Const
   { IPC flags for get calls }
 
-{$if defined(FreeBSD) or defined(NetBSD) or defined(OpenBSD)}  // BSD_VISIBLE
+{$if defined(FreeBSD) or defined(NetBSD) or defined(OpenBSD) or defined(DragonFly) }  // BSD_VISIBLE
   IPC_R      =  4 shl 6;
   IPC_W      =  2 shl 6;
   IPC_M      =  2 shl 12;
@@ -92,7 +92,7 @@ type
   End;
 {$packrecords c}
 {$else }
-{$if defined(NetBSD) or defined(OpenBSD) or defined(FreeBSD) }
+{$if defined(NetBSD) or defined(OpenBSD) or defined(FreeBSD) or defined(DragonFly) }
   TIPC_Perm = record
         cuid  : uid_t;  { creator user id }
         cgid  : gid_t;  { creator group id }
@@ -155,7 +155,7 @@ Function ftok (Path : pchar;  ID : cint)
 Type
   PShmid_DS = ^TShmid_ds;
 
-{$if defined(FreeBSD) or defined(OpenBSD) or defined (NetBSD) }
+{$if defined(FreeBSD) or defined(OpenBSD) or defined (NetBSD) or defined(DragonFly) }
   TShmid_ds = record
     shm_perm  : TIPC_Perm;
     shm_segsz : cint;
