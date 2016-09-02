--- hadoop-tools/hadoop-pipes/src/main/native/utils/api/hadoop/SerialUtils.hh.orig	2016-01-26 02:07:35.000000000 +0200
+++ hadoop-tools/hadoop-pipes/src/main/native/utils/api/hadoop/SerialUtils.hh
@@ -19,6 +19,7 @@
 #define HADOOP_SERIAL_UTILS_HH
 
 #include <string>
+#include <cstdio> // for fopen fread frwite etc
 #include <stdint.h>
 
 namespace HadoopUtils {
