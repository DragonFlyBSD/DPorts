--- mangobar.c.orig
+++ mangobar.c
@@ -24,7 +24,6 @@
 #include <stdlib.h>
 #include <string.h>
 #include <sys/mman.h>
-#include <sys/eventfd.h>
 #include <sys/socket.h>
 #include <sys/stat.h>
 #include <sys/syscall.h>
@@ -610,6 +609,7 @@
 static atomic_int pa_source_bt;
 static atomic_bool pa_dirty;
 static int pulse_event_fd = -1;
+static int pulse_event_wfd = -1;
 static pthread_t pulse_thread;
 static atomic_bool pa_running;
 
@@ -631,6 +631,7 @@
 } custom_signal_map[MANGOBAR_MAX_CONFIGS * MANGOBAR_MAX_CUSTOM];
 static int custom_signal_count;
 static int signal_fd = -1;
+static int signal_wfd = -1;
 
 static const struct wl_pointer_listener pointer_listener;
 
@@ -663,7 +664,20 @@
 };
 
 static int allocate_shm_file(size_t size) {
-  int fd = memfd_create("mangobar", MFD_CLOEXEC);
+  // No memfd_create: a uniquely named shm object, unlinked right away.
+  char name[] = "/mangobar-XXXXXXXXXX";
+  int fd = -1;
+  for (int tries = 0; tries < 16 && fd < 0; tries++) {
+    uint8_t rnd[10];
+    arc4random_buf(rnd, sizeof(rnd));
+    for (size_t i = 0; i < sizeof(rnd); i++)
+      name[10 + i] = 'a' + rnd[i] % 26;
+    fd = shm_open(name, O_RDWR | O_CREAT | O_EXCL | O_CLOEXEC, 0600);
+    if (fd >= 0)
+      shm_unlink(name);
+    else if (errno != EEXIST)
+      return -1;
+  }
   if (fd < 0)
     return -1;
   if (ftruncate(fd, size) < 0) {
@@ -4229,7 +4243,7 @@
           atomic_load(&pa_muted), bt);
   if (pulse_event_fd >= 0) {
     uint64_t one = 1;
-    ssize_t wr = write(pulse_event_fd, &one, sizeof(one));
+    ssize_t wr = write(pulse_event_wfd, &one, sizeof(one));
     (void)wr;
   }
 }
@@ -4330,13 +4344,19 @@
   pa_ml = pa_mainloop_new();
   if (!pa_ml)
     return;
-  pulse_event_fd = eventfd(0, EFD_CLOEXEC | EFD_NONBLOCK);
+  int p[2];
+  if (pipe2(p, O_CLOEXEC | O_NONBLOCK) == 0) {
+    pulse_event_fd = p[0];
+    pulse_event_wfd = p[1];
+  }
   pa_mainloop_api *api = pa_mainloop_get_api(pa_ml);
   pa_ctx = pa_context_new(api, "mangobar");
   if (!pa_ctx) {
-    if (pulse_event_fd >= 0)
+    if (pulse_event_fd >= 0) {
       close(pulse_event_fd);
-    pulse_event_fd = -1;
+      close(pulse_event_wfd);
+    }
+    pulse_event_fd = pulse_event_wfd = -1;
     pa_mainloop_free(pa_ml);
     pa_ml = NULL;
     return;
@@ -4631,16 +4651,18 @@
   }
   if (signal_fd >= 0) {
     uint64_t one = 1;
-    ssize_t r = write(signal_fd, &one, sizeof(one));
+    ssize_t r = write(signal_wfd, &one, sizeof(one));
     (void)r;
   }
 }
 
 // Install SIGRTMIN+N handlers for custom modules that declare a "signal".
 static void register_custom_signals(void) {
-  signal_fd = eventfd(0, EFD_CLOEXEC | EFD_NONBLOCK);
-  if (signal_fd < 0)
+  int p[2];
+  if (pipe2(p, O_CLOEXEC | O_NONBLOCK) != 0)
     return;
+  signal_fd = p[0];
+  signal_wfd = p[1];
   for (size_t pi = 0; pi < g_config_set.count; pi++) {
     MangoConfig *cfg = &g_config_set.profiles[pi].config;
     for (int i = 0; i < cfg->custom_count; i++) {
@@ -5210,10 +5232,14 @@
     pa_context_unref(pa_ctx);
   if (pa_ml)
     pa_mainloop_free(pa_ml);
-  if (pulse_event_fd >= 0)
+  if (pulse_event_fd >= 0) {
     close(pulse_event_fd);
-  if (signal_fd >= 0)
+    close(pulse_event_wfd);
+  }
+  if (signal_fd >= 0) {
     close(signal_fd);
+    close(signal_wfd);
+  }
   if (g_udev_mon)
     udev_monitor_unref(g_udev_mon);
   if (g_udev)
