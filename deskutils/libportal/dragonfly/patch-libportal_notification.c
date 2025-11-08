--- libportal/notification.c.orig	Wed Feb 12 10:38:40 2025
+++ libportal/notification.c	Sat Nov
@@ -82,7 +82,9 @@ bytes_to_memfd (const gchar  *name,
   gpointer shm;
   gsize bytes_len;
 
+#ifndef __DragonFly__
   fd = memfd_create (name, MFD_ALLOW_SEALING);
+#endif
   if (fd == -1)
     {
       int saved_errno = errno;
@@ -328,7 +330,9 @@ parse_media (GVariant            *media,
         {
           g_autofd int fd = -1;
 
+#ifndef __DragonFly__
           fd = memfd_create ("notification-media", MFD_ALLOW_SEALING);
+#endif
           if (fd == -1)
             {
               int saved_errno = errno;
