--- src/medusa-net.c.intermediate	2020-11-24 04:34:39.000000000 +0000
+++ src/medusa-net.c
@@ -183,7 +183,8 @@ int medusaConnectInternal(unsigned long
       { 
           if (nFail > 0 && nFail <= nRetries)
           {
-            writeError(ERR_ERROR, "Thread %X: Host: %s Cannot connect [unreachable], retrying (%d of %d retries)", (int)pthread_self(), inet_ntop(AF_INET, &target.sin_addr, out, sizeof(out)), nFail, nRetries);
+            writeError(ERR_ERROR, "Thread %jX: Host: %s Cannot connect [unreachable], retrying (%d of %d retries)", (uintptr_t)pthread_self(),
+	               inet_ntop(AF_INET, &target.sin_addr, out, sizeof(out)), nFail, nRetries);
             sleep(nRetryWait);
           }
           else if (nFail > nRetries)
