--- server/server.cpp.orig
+++ server/server.cpp
@@ -152,7 +152,7 @@
     { "job-timeout", "120", "timeout for idle jobs (seconds)", jobtimeout },
     { "purge-interval", "5", "how often job lists are purged (seconds)", purgeinterval },
     { "options-file",
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
       "%%PREFIX%%/etc/airsane/options.conf",
 #else
       "/etc/airsane/options.conf",
@@ -160,7 +160,7 @@
       "location of device options file",
       optionsfile },
     { "ignore-list",
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
       "%%PREFIX%%/etc/airsane/ignore.conf",
 #else
       "/etc/airsane/ignore.conf",
@@ -168,7 +168,7 @@
       "location of device ignore list",
       ignorelist },
     { "access-file",
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
       "/usr/local/etc/airsane/access.conf",
 #else
       "/etc/airsane/access.conf",
