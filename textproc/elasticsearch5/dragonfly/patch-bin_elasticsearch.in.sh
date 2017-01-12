--- bin/elasticsearch.in.sh.intermediate	2017-01-12 06:26:18 UTC
+++ bin/elasticsearch.in.sh
@@ -1,6 +1,5 @@
 #!/bin/bash
 
-if [ `uname -o` == "FreeBSD" ]; then
 	. /etc/rc.subr
 	load_rc_config elasticsearch
 	ES_MIN_MEM=${elasticsearch_min_mem}
@@ -12,7 +11,6 @@ if [ `uname -o` == "FreeBSD" ]; then
 	ES_GC_LOG_FILE=${elasticsearch_gc_logfile}
 	ES_JAVA_OPTS="$ES_JAVA_OPTS -Des.path.conf=${elasticsearch_config:="/usr/local/etc/elasticsearch"}"
 	PATH=${PATH}:/usr/local/bin
-fi
 
 # check in case a user was using this mechanism
 if [ "x$ES_CLASSPATH" != "x" ]; then
