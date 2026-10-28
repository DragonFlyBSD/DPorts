--- common/common.cpp.orig
+++ common/common.cpp
@@ -1027,7 +1027,7 @@
     };
     cache_directory = common_get_env("LLAMA_CACHE");
     if (cache_directory.empty()) {
-#if defined(__linux__) || defined(__FreeBSD__) || defined(_AIX) || \
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(_AIX) || \
         defined(__OpenBSD__) || defined(__NetBSD__)
         const std::string xdg_cache_home = common_get_env("XDG_CACHE_HOME");
         const std::string home           = common_get_env("HOME");
@@ -1078,7 +1078,7 @@
         }
         return p;
     };
-#if defined(__linux__) || defined(__FreeBSD__) || defined(_AIX) || \
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(_AIX) || \
         defined(__OpenBSD__) || defined(__NetBSD__) || defined(__APPLE__)
     const std::string xdg_config_home = common_get_env("XDG_CONFIG_HOME");
     const std::string home            = common_get_env("HOME");
