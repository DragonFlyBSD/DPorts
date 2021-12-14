--- plugins/disks/disks.cpp.orig	2021-08-31 11:39:30 UTC
+++ plugins/disks/disks.cpp
@@ -7,7 +7,7 @@
 
 #include "disks.h"
 
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) && !defined(__DragonFly__)
 #include <devstat.h>
 #include <libgeom.h>
 #endif
@@ -159,14 +159,14 @@
         }
     });
     addAggregateSensors();
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) && !defined(__DragonFly__)
     geom_stats_open();
 #endif
 }
 
 DisksPlugin::~DisksPlugin()
 {
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) && !defined(__DragonFly__)
     geom_stats_close();
 #endif
 }
@@ -307,7 +307,7 @@
             m_volumesByDevice[device]->setBytes(fields[5].toULongLong() * 512, fields[9].toULongLong() * 512, elapsed);
         }
     }
-#elif defined Q_OS_FREEBSD
+#elif defined Q_OS_FREEBSD && !defined(__DragonFly__)
     std::unique_ptr<void, decltype(&geom_stats_snapshot_free)> stats(geom_stats_snapshot_get(), geom_stats_snapshot_free);
     gmesh mesh;
     geom_gettree(&mesh);
@@ -324,6 +324,8 @@
         }
     }
     geom_deletetree(&mesh);
+#elif defined(__DragonFly__)
+    return; // not implemented
 #endif
 }
 
