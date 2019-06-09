--- codelite_terminal/procutils.cpp.intermediate	2019-06-07 14:13:44.000000000 +0000
+++ codelite_terminal/procutils.cpp
@@ -40,7 +40,7 @@
 
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <kvm.h>
 #include <fcntl.h>
 #include <sys/param.h>
@@ -143,7 +143,7 @@ wxString ProcUtils::GetProcessNameByPid(
     CloseHandle( hModuleSnap );
     return me32.szExePath;
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
     kvm_t *kvd;
     struct kinfo_proc *ki;
     int nof_procs;
@@ -250,7 +250,7 @@ void ProcUtils::GetProcessList(std::vect
     } while (Process32Next (hProcessSnap, &pe));
     CloseHandle (hProcessSnap);
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
     kvm_t *kvd;
     struct kinfo_proc *ki;
     int nof_procs, i;
@@ -274,12 +274,16 @@ void ProcUtils::GetProcessList(std::vect
 #else
     //GTK and other
     wxArrayString output;
+#ifdef __DragonFly__
+    ExecuteCommand(wxT("ps -A -o pid,command "), output);
+#else
 #if defined (__WXGTK__)
     ExecuteCommand(wxT("ps -A -o pid,command  --no-heading"), output);
 #elif defined (__WXMAC__)
     // Mac does not like the --no-heading...
     ExecuteCommand(wxT("ps -A -o pid,command "), output);
 #endif
+#endif
     for (size_t i=0; i< output.GetCount(); i++) {
         wxString line = output.Item(i);
         //remove whitespaces
@@ -348,7 +352,7 @@ void ProcUtils::GetChildren(long pid, st
     } while (Process32Next (hProcessSnap, &pe));
     CloseHandle (hProcessSnap);
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
     kvm_t *kvd;
     struct kinfo_proc *ki;
     int nof_procs, i;
@@ -371,11 +375,15 @@ void ProcUtils::GetChildren(long pid, st
 #else
     //GTK and other
     wxArrayString output;
+#ifdef __DragonFly__
+    ExecuteCommand(wxT("ps -A -o pid,ppid "), output);
+#else
 #ifdef __WXGTK__
     ExecuteCommand(wxT("ps -A -o pid,ppid  --no-heading"), output);
 #else
     ExecuteCommand(wxT("ps -A -o pid,ppid "), output);
 #endif
+#endif
     //parse the output and search for our process ID
     for (size_t i=0; i< output.GetCount(); i++) {
         long lpid(0);
