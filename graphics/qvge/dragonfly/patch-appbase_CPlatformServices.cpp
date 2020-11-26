--- appbase/CPlatformServices.cpp.orig	2020-06-22 11:24:05 UTC
+++ appbase/CPlatformServices.cpp
@@ -186,7 +186,11 @@ quint64 CPlatformServices::GetTotalRAMBy
 
     int mib[2];
     mib[0] = CTL_HW;
+#ifdef HW_REALMEM
     mib[1] = HW_REALMEM;
+#else
+    mib[1] = HW_PHYSMEM;
+#endif
     unsigned int size = 0;		/* 32-bit */
     size_t len = sizeof( size );
     if ( sysctl( mib, 2, &size, &len, NULL, 0 ) == 0 )
