--- src/medusa-trace.c.orig	2015-11-09 18:06:40 UTC
+++ src/medusa-trace.c
@@ -181,19 +181,19 @@ void writeError(int iLevel, char *pMsg,
         fprintf(stderr, "INFO: ");
         break;
       case ERR_DEBUG:
-        fprintf(stderr, "DEBUG [%X]: ", (int)pthread_self());
+        fprintf(stderr, "DEBUG [%jX]: ", (uintptr_t)pthread_self());
         break;
       case ERR_DEBUG_AUDIT:
-        fprintf(stderr, "DEBUG AUDIT [%X]: ", (int)pthread_self());
+        fprintf(stderr, "DEBUG AUDIT [%jX]: ", (uintptr_t)pthread_self());
         break;
       case ERR_DEBUG_SERVER:
-        fprintf(stderr, "DEBUG SERVER [%X]: ", (int)pthread_self());
+        fprintf(stderr, "DEBUG SERVER [%jX]: ", (uintptr_t)pthread_self());
         break;
       case ERR_DEBUG_MODULE:
-        fprintf(stderr, "DEBUG MODULE [%X]: ", (int)pthread_self());
+        fprintf(stderr, "DEBUG MODULE [%jX]: ", (uintptr_t)pthread_self());
         break;
       default:
-        fprintf(stdout, "UNKNOWN ERROR [%X]: ", (int)pthread_self());
+        fprintf(stdout, "UNKNOWN ERROR [%jX]: ", (uintptr_t)pthread_self());
         break;
     }
   
