--- src/CegoRecoveryManager.cc.orig	2016-07-20 17:07:27.000000000 +0300
+++ src/CegoRecoveryManager.cc
@@ -30,6 +30,7 @@
 
 #include <string.h>
 #include <stdlib.h>
+#include <cstdlib>
 
 CegoRecoveryManager::CegoRecoveryManager(CegoDistManager *pGTM, CegoRecoveryManager::RecoveryMode mode)
 {
