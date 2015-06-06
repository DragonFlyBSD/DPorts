--- src/share/poudriere/common.sh.orig	2015-04-30 09:40:15 UTC
+++ src/share/poudriere/common.sh
@@ -2296,7 +2296,6 @@ calculate_duration() {
 	local _elapsed="$2"
 	local seconds minutes hours _duration
 
-	[ ${_elapsed} -ge 0 ] || return 1
 
 	seconds=$((${_elapsed} % 60))
 	minutes=$(((${_elapsed} / 60) % 60))
