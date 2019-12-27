--- hardware/HardwareMonitor.cpp.orig	2019-05-10 09:37:55 UTC
+++ hardware/HardwareMonitor.cpp
@@ -13,10 +13,14 @@
 
 #ifdef WIN32
 	#include <comdef.h>
-#elif defined(__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined (__OpenBSD__)
-#if !defined ( __FreeBSD__) && !defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
+#if !defined ( __FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
 	#include <sys/sysinfo.h>
 #endif
+#ifdef __DragonFly__
+	#include <sys/sysctl.h>
+	#include <sys/resource.h>
+#endif
 #ifdef __OpenBSD__
 	#include <sys/sysctl.h>
 	#include <sys/sched.h>
@@ -76,7 +80,7 @@ CHardwareMonitor::CHardwareMonitor(const
 	m_HwdID = ID;
 	m_bOutputLog = false;
 	m_lastquerytime = 0;
-#if defined (__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined (__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	m_totcpu = 0;
 	m_lastloadcpu = 0;
 #endif
@@ -116,7 +120,7 @@ bool CHardwareMonitor::StartHardware()
 	SetThreadNameInt(m_thread->native_handle());
 	m_bIsStarted = true;
 	sOnConnected(this);
-#if defined(__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	// Busybox df doesn't support -x parameter
 	int returncode = 0;
 	std::vector<std::string> ret = ExecuteCommandAndReturn("df -x nfs -x tmpfs -x devtmpfs 2> /dev/null", returncode);
@@ -171,7 +175,7 @@ void CHardwareMonitor::Do_Work()
 				}
 			}
 
-#if defined(__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 			if (sec_counter % POLL_INTERVAL_CPU == 0)
 			{
 				try
@@ -306,7 +310,7 @@ void CHardwareMonitor::FetchData()
 		RunWMIQuery("Sensor","Voltage");
 		return;
 	}
-#elif defined(__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	if (bHasInternalTemperature)
 		GetInternalTemperature();
 
@@ -521,7 +525,7 @@ void CHardwareMonitor::RunWMIQuery(const
 		pEnumerator->Release();
 	}
 }
-#elif defined(__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	double time_so_far()
 	{
 		struct timeval tp;
@@ -639,8 +643,10 @@ void CHardwareMonitor::RunWMIQuery(const
 #ifndef __FreeBSD__
 		if (memusedpercentage == -1)
 		{
-#ifdef __OpenBSD__
+#if defined(__OpenBSD__)
 			memusedpercentage = GetMemUsageOpenBSD();
+#elif defined(__DragonFly__)
+			memusedpercentage = 0;
 #else
 			//old (wrong) way
 			struct sysinfo mySysInfo;
@@ -671,7 +677,7 @@ void CHardwareMonitor::RunWMIQuery(const
 		char cname[50];
 		if (m_lastquerytime==0)
 		{
-#if defined(__OpenBSD__)
+#if defined(__OpenBSD__) || defined(__DragonFly__)
 			//Get number of CPUs
 			// sysctl hw.ncpu
 			int mib[] = {CTL_HW, HW_NCPU};
@@ -683,6 +689,12 @@ void CHardwareMonitor::RunWMIQuery(const
 				return;
 			}
 			m_lastquerytime = time_so_far();
+#ifdef __DragonFly__
+			size = sizeof(loads);
+			if (sysctlbyname("kern.cp_time", &loads, &size, NULL, 0) < 0) {
+				_log.Log(LOG_ERROR, "sysctlbyname kern.cp_time failed.");
+			}
+#else
 			// In the emd there will be single value, so using
 			// average loads doesn't generate that much error.
 			mib[0] = CTL_KERN;
@@ -692,6 +704,7 @@ void CHardwareMonitor::RunWMIQuery(const
 				_log.Log(LOG_ERROR, "sysctl CPTIME failed.");
 				return;
 			}
+#endif
 			//Interrupts aren't measured.
 			m_lastloadcpu = loads[CP_USER] + loads[CP_NICE] + loads[CP_SYS];
 			m_totcpu=totcpu;
@@ -731,13 +744,20 @@ void CHardwareMonitor::RunWMIQuery(const
 		else
 		{
 			double acttime = time_so_far();
-#if defined(__OpenBSD__)
+#if defined(__OpenBSD__) || defined(__DragonFly__)
+#ifdef __DragonFly__
+			long loads[CPUSTATES];
+			size_t size = sizeof(loads);
+			if (sysctlbyname("kern.cp_time", &loads, &size, NULL, 0) < 0) {
+				_log.Log(LOG_ERROR, "sysctlbyname kern.cp_time failed.");
+#else
 			int mib[] = {CTL_KERN, KERN_CPTIME};
 			long loads[CPUSTATES];
 			size_t size = sizeof(loads);
 			if (sysctl(mib, 2, loads, &size, NULL, 0) < 0){
 				_log.Log(LOG_ERROR, "sysctl CPTIME failed.");
 				return;
+#endif
 			}else {
 				long long t = (loads[CP_USER] + loads[CP_NICE] + loads[CP_SYS])-m_lastloadcpu;
 				double cpuper=((double(t) / (difftime(acttime,m_lastquerytime) * HZ)) * 100);///double(m_totcpu);
@@ -802,7 +822,7 @@ void CHardwareMonitor::RunWMIQuery(const
 							continue;
 						}
 					}
-#if defined(__linux__) || defined(__FreeBSD__) || defined (__OpenBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined (__OpenBSD__) || defined(__DragonFly__)
 					if (strstr(dname, "/dev") != NULL)
 #elif defined(__CYGWIN32__)
 					if (strstr(smountpoint, "/cygdrive/") != NULL)
