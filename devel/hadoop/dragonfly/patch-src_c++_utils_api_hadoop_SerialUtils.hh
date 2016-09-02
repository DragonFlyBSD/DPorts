--- src/c++/utils/api/hadoop/SerialUtils.hh.orig	2013-07-23 01:26:40.000000000 +0300
+++ src/c++/utils/api/hadoop/SerialUtils.hh
@@ -19,6 +19,7 @@
 #define HADOOP_SERIAL_UTILS_HH
 
 #include <string>
+#include <cstdio> // for fopen fread frwite etc
 #include <stdint.h>
 
 namespace HadoopUtils {
