--- agent/kernel.c.intermediate	2025-01-07 12:10:01 UTC
+++ agent/kernel.c
@@ -252,7 +252,7 @@ free_kmem(void)
         kmem = -1;
     }
 }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 kvm_t *kd;
 
 /**
