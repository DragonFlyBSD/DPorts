--- src/main.cpp.orig
+++ src/main.cpp
@@ -30,7 +30,7 @@
 #define DEV_MEM "/dev/mem"
 #if defined(__linux__)
 #  define DEV_FMEM "/dev/fmem"
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 #  define DEV_KMEM "/dev/kmem"
 #else
 #  error "Unsupported OS"
@@ -100,7 +100,7 @@
       return EXIT_FAILURE;
     }
   }
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   if (isFileExist(DEV_MEM) == false /*|| isFileExist(DEV_KMEM) == false*/) {
       cerr << "[ERROR] Either /dev/mem or /dev/kmem doesn't exist.\n"
               "Please check if the kernel was configured with 'device mem'."
@@ -112,7 +112,7 @@
   int fileDescriptor;
 #if defined(__linux__)
   if ((fileDescriptor = open(DEV_FMEM, O_RDWR | O_SYNC)) == -1)
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
   if ((fileDescriptor = open(DEV_MEM, O_RDWR | O_SYNC)) == -1)
 #endif
     FATAL;
