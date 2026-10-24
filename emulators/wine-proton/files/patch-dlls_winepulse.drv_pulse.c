--- dlls/winepulse.drv/pulse.c.orig	2026-01-19 21:07:17 UTC
+++ dlls/winepulse.drv/pulse.c
@@ -983,7 +983,7 @@ static NTSTATUS pulse_test_connect(void *args)
 
     pulse_unlock();
 
-    params->priority = Priority_Preferred;
+    params->priority = Priority_Neutral;
     return STATUS_SUCCESS;
 
 fail:
