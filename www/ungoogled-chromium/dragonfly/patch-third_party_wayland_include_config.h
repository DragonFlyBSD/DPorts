diff --git third_party/wayland/include/config.h third_party/wayland/include/config.h
index 79fcbb81ce2..83dd42cfb9c 100644
--- third_party/wayland/include/config.h
+++ third_party/wayland/include/config.h
@@ -32,7 +32,7 @@
 
 #undef HAVE_SYS_PROCCTL_H
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #define HAVE_SYS_UCRED_H
 #else
 #undef HAVE_SYS_UCRED_H
