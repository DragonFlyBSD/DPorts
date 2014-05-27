--- jdk/src/solaris/bin/java_md_solinux.c.intermediate	2014-05-27 20:12:22.240241000 +0000
+++ jdk/src/solaris/bin/java_md_solinux.c
@@ -928,9 +928,9 @@ SetExecname(char **argv)
             }
         }
     }
-#elif defined(__linux__) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
     {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         const char* self = "/proc/curproc/file";
 #else
         const char* self = "/proc/self/exe";
