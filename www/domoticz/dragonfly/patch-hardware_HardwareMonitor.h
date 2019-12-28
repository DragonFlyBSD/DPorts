--- hardware/HardwareMonitor.h.orig	2019-05-10 09:37:55 UTC
+++ hardware/HardwareMonitor.h
@@ -36,7 +36,7 @@ private:
 	IWbemLocator *m_pLocator;
 	IWbemServices *m_pServicesOHM;
 	IWbemServices *m_pServicesSystem;
-#elif defined (__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined (__linux__) || defined(__CYGWIN32__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 	void FetchUnixCPU();
 	void FetchUnixMemory();
 	void FetchUnixDisk();
