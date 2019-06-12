--- Codelite/procutils.cpp.intermediate	2019-06-07 13:05:07.000000000 +0000
+++ CodeLite/procutils.cpp
@@ -40,7 +40,7 @@
 
 #endif
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <kvm.h>
 #include <fcntl.h>
 #include <sys/param.h>
@@ -142,7 +142,7 @@ wxString ProcUtils::GetProcessNameByPid(
     CloseHandle(hModuleSnap);
     return me32.szExePath;
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
     kvm_t* kvd;
     struct kinfo_proc* ki;
     int nof_procs;
@@ -249,7 +249,7 @@ void ProcUtils::GetProcessList(std::vect
     } while(Process32Next(hProcessSnap, &pe));
     CloseHandle(hProcessSnap);
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
     kvm_t* kvd;
     struct kinfo_proc* ki;
     int nof_procs, i;
@@ -272,12 +272,15 @@ void ProcUtils::GetProcessList(std::vect
 #else
     // GTK and other
     wxArrayString output;
+#ifdef __DragonFly__
+    ExecuteCommand(wxT("ps -A -o pid,command "), output);
 #if defined(__WXGTK__)
     ExecuteCommand(wxT("ps -A -o pid,command  --no-heading"), output);
 #elif defined(__WXMAC__)
     // Mac does not like the --no-heading...
     ExecuteCommand(wxT("ps -A -o pid,command "), output);
 #endif
+#endif
     for(size_t i = 0; i < output.GetCount(); i++) {
         wxString line = output.Item(i);
         // remove whitespaces
@@ -346,7 +349,7 @@ void ProcUtils::GetChildren(long pid, st
     } while(Process32Next(hProcessSnap, &pe));
     CloseHandle(hProcessSnap);
 
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
     kvm_t* kvd;
     struct kinfo_proc* ki;
     int nof_procs, i;
@@ -367,11 +370,14 @@ void ProcUtils::GetChildren(long pid, st
 #else
     // GTK and other
     wxArrayString output;
+#ifdef __DragonFly__
+    ExecuteCommand(wxT("ps -A -o pid,ppid "), output);
 #ifdef __WXGTK__
     ExecuteCommand(wxT("ps -A -o pid,ppid  --no-heading"), output);
 #else
     ExecuteCommand(wxT("ps -A -o pid,ppid "), output);
 #endif
+#endif
     // parse the output and search for our process ID
     for(size_t i = 0; i < output.GetCount(); i++) {
         long lpid(0);
