--- src/fstab.c.orig	2002-12-07 04:35:48.000000000 +0200
+++ src/fstab.c
@@ -107,7 +107,7 @@ void            parseFstab(allInfo * ai)
             continue;
 
         /* Identify probable icon type by filesystem */
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
         if (strcmp(tok, "cd9660") == 0)
 #else
         if (strcmp(tok, "iso9660") == 0)
@@ -163,7 +163,7 @@ int             autoDetect(char *devType
     if (strncmp(devType, "sr", 2) == 0)
         return ICO_CD;
 #endif
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     if (strncmp(devType, "wcd", 3) == 0)
         return ICO_CD;
     if (strncmp(devType, "scd", 3) == 0)
