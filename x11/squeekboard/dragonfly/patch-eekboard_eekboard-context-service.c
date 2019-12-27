--- eekboard/eekboard-context-service.c.orig	2019-12-02 19:40:14 UTC
+++ eekboard/eekboard-context-service.c
@@ -107,6 +107,9 @@ eekboard_context_service_real_create_key
     keymap_str = xkb_keymap_get_as_string(keymap, XKB_KEYMAP_FORMAT_TEXT_V1);
     keyboard->keymap_len = strlen(keymap_str) + 1;
 
+#ifdef __DragonFly__
+    g_autofree char *path = mktemp(strdup("/eek_keymap-XXXXXX"));
+#else
     g_autofree char *path = strdup("/eek_keymap-XXXXXX");
     char *r = &path[strlen(path) - 6];
     getrandom(r, 6, GRND_NONBLOCK);
@@ -114,6 +117,7 @@ eekboard_context_service_real_create_key
         r[i] = (r[i] & 0b1111111) | 0b1000000; // A-z
         r[i] = r[i] > 'z' ? '?' : r[i]; // The randomizer doesn't need to be good...
     }
+#endif
     int keymap_fd = shm_open(path, O_RDWR | O_CREAT | O_EXCL, 0600);
     if (keymap_fd < 0) {
         g_error("Failed to set up keymap fd");
