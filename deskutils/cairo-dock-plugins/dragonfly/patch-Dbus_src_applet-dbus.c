--- Dbus/src/applet-dbus.c.intermediate	2019-05-09 17:59:27 UTC
+++ Dbus/src/applet-dbus.c
@@ -42,7 +42,7 @@ dbus-send --session --dest=org.cairodock
 #include <dbus/dbus-glib.h>
 #include <dbus/dbus-glib-bindings.h>
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <kvm.h>
 #include <sys/param.h>
 #include <sys/sysctl.h>
@@ -377,7 +377,7 @@ static void _on_got_list (GHashTable *pP
 ///////////////
 void cd_dbus_clean_up_processes (gboolean bAll)
 {
-	#ifdef __FreeBSD__   // thanks to Max Power for the BSD port
+	#if defined(__FreeBSD__) || defined(__DragonFly__)   // thanks to Max Power for the BSD port
 	kvm_t *kd; //pointer for KVM library
 	char errbuf[_POSIX2_LINE_MAX]; //error message
 	int nentries; //number of processes
@@ -389,7 +389,11 @@ void cd_dbus_clean_up_processes (gboolea
 		cd_warning ("Dbus : %s",errbuf);
 		return;
 	}
+#ifdef __DragonFly__
+	kp = kvm_getprocs(kd,KERN_PROC_ALL,0,&nentries);
+#else
 	kp = kvm_getprocs(kd,KERN_PROC_PROC,0,&nentries);
+#endif
 	for(p=0; p<nentries;p++)
 	{
 		//SEARCHING...
@@ -406,12 +410,21 @@ void cd_dbus_clean_up_processes (gboolea
 			continue;
 		
 		//..SEEK...
+#ifdef __DragonFly__
+		if (bAll || kp[p].kp_ppid==1) // old process, if parent exprired ppid is set to 1
+		{
+			//...AND DESTROY
+			cd_message ("this applet (%s %d) is linked to an old gldi process (%d), kill it.", kp[p].kp_comm, kp[p].kp_pid, kp[p].kp_ppid);
+			kill (kp[p].kp_pid, SIGKILL); // SIGTERM sometimes lets the process alive.
+		}
+#else
 		if (bAll || kp[p].ki_ppid==1) // old process, if parent exprired ppid is set to 1
 		{
 			//...AND DESTROY
 			cd_message ("this applet (%s %d) is linked to an old gldi process (%d), kill it.", kp[p].ki_comm, kp[p].ki_pid, kp[p].ki_ppid);
 			kill (kp[p].ki_pid, SIGKILL); // SIGTERM sometimes lets the process alive.
 		}
+#endif
 	}
 	kvm_close(kd);
 	#else
