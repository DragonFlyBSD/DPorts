--- rtl/bsd/ipcbsd.inc.orig	2012-02-14 18:33:02.000000000 +0000
+++ rtl/bsd/ipcbsd.inc
@@ -27,7 +27,7 @@ end;
 
 function shmget(key:key_t;size:size_t;flag:cint):cint;
 begin
-{$ifdef NetBSD}
+{$if defined(NetBSD) or defined(DragonFly)}
   shmget:=do_syscall(syscall_nr_shmget, key, size, flag);
 {$else NetBSD}
   shmget:=do_syscall(syscall_nr_shmsys,3, key, size, flag);
@@ -36,7 +36,7 @@ end;
 
 Function shmat (shmid:cint; shmaddr:pointer; shmflg:cint):pointer;
 begin
-{$ifdef NetBSD}
+{$if defined(NetBSD) or defined(DragonFly)}
   shmat:=pointer(do_syscall(syscall_nr_shmat, shmid, TSysParam(shmaddr), shmflg));
 {$else NetBSD}
   shmat:=pointer(do_syscall(syscall_nr_shmsys,0, shmid, TSysParam(shmaddr), shmflg));
@@ -46,7 +46,7 @@ end;
 Function shmdt (shmaddr:pointer):cint;
 
 begin
-{$ifdef NetBSD}
+{$if defined(NetBSD) or defined(DragonFly)}
   shmdt:=do_syscall(syscall_nr_shmdt, TSysParam(shmaddr));
 {$else NetBSD}
   shmdt:=do_syscall(syscall_nr_shmsys,2, TSysParam(shmaddr));
@@ -59,13 +59,17 @@ begin
 {$ifdef NetBSD}
   shmctl:= do_syscall(syscall_nr___shmctl13, shmid, cmd, TSysParam(buf));
 {$else NetBSD}
-  shmctl:= do_syscall(syscall_nr_shmsys,4, shmid, cmd, TSysParam(buf));
+  {$ifdef DragonFly}
+    shmctl:= do_syscall(syscall_nr_shmctl, shmid, cmd, TSysParam(buf));
+  {$else DragonFly}
+    shmctl:= do_syscall(syscall_nr_shmsys,4, shmid, cmd, TSysParam(buf));
+  {$endif DragonFly}
 {$endif NetBSD}
 end;
 
 Function semget(key:Tkey; nsems:cint; semflg:cint): cint;
 begin
-{$ifdef NetBSD}
+{$if defined(NetBSD) or defined(DragonFly)}
   semget:=do_syscall(syscall_nr_semget, key, nsems, semflg);
 {$else NetBSD}
   semget:=do_syscall(syscall_nr_semsys,1, key, nsems, semflg);
@@ -74,7 +78,7 @@ end;
 
 Function semop(semid:cint; sops: psembuf; nsops: cuint): cint;
 begin
-{$ifdef NetBSD}
+{$if defined(NetBSD) or defined(DragonFly)}
   semop:=do_syscall(syscall_nr_semop, semid, TSysParam(sops), nsops, 0);
 {$else NetBSD}
   semop:=do_syscall(syscall_nr_semsys,2, semid, TSysParam(sops), nsops, 0);
@@ -86,13 +90,17 @@ begin
 {$ifdef NetBSD}
   semctl:=cint(do_syscall(syscall_nr_semconfig, semid, semnum, cmd,TSysParam(@arg)));
 {$else NetBSD}
-  semctl:=cint(do_syscall(syscall_nr_semsys, 0, semid, semnum, cmd,TSysParam(@arg)));
+  {$ifdef DragonFly}
+    semctl:=cint(do_syscall(syscall_nr___semctl, semid, semnum, cmd,TSysParam(@arg)));
+  {$else DragonFly}
+    semctl:=cint(do_syscall(syscall_nr_semsys, 0, semid, semnum, cmd,TSysParam(@arg)));
+  {$endif DragonFly}
 {$endif NetBSD}
 end;
 
 Function msgget(key: TKey; msgflg:cint):cint;
 begin
-{$ifdef NetBSD}
+{$if defined(NetBSD) or defined(DragonFly)}
   msgget:=do_syscall(syscall_nr_msgget, key, msgflg);
 {$else NetBSD}
   msgget:=do_syscall(syscall_nr_msgsys,1, key, msgflg);
@@ -101,7 +109,7 @@ end;
 
 Function msgsnd(msqid:cint; msgp: PMSGBuf; msgsz: size_t; msgflg:cint): cint;
 begin
-{$ifdef NetBSD}
+{$if defined(NetBSD) or defined(DragonFly)}
   msgsnd:=do_syscall(syscall_nr_msgsnd, msqid, TSysParam(msgp), TSysParam(msgsz), msgflg);
 {$else NetBSD}
   msgsnd:=do_syscall(syscall_nr_msgsys,2, msqid, TSysParam(msgp), TSysParam(msgsz), msgflg);
@@ -110,7 +118,7 @@ end;
 
 Function msgrcv(msqid:cint; msgp: PMSGBuf; msgsz: size_t; msgtyp:clong; msgflg:cint):cint;
 begin
-{$ifdef NetBSD}
+{$if defined(NetBSD) or defined(DragonFly)}
   msgrcv:=(do_syscall(syscall_nr_msgrcv, msqid, TSysParam(msgp), msgsz, msgtyp, msgflg));
 {$else NetBSD}
   msgrcv:=(do_syscall(syscall_nr_msgsys,3, msqid, TSysParam(msgp), msgsz, msgtyp, msgflg));
@@ -122,7 +130,11 @@ begin
 {$ifdef NetBSD}
  msgctl:= (do_syscall(syscall_nr___msgctl13, msqid, cmd, tsysparam(buf)));
 {$else NetBSD}
- msgctl:= (do_syscall(syscall_nr_msgsys,0, msqid, cmd, tsysparam(buf)));
+  {$ifdef DragonFly}
+     msgctl:= (do_syscall(syscall_nr_msgctl, msqid, cmd, tsysparam(buf)));
+  {$else DragonFly}
+     msgctl:= (do_syscall(syscall_nr_msgsys,0, msqid, cmd, tsysparam(buf)));
+  {$endif DragonFly}
 {$endif NetBSD}
 end;
 
