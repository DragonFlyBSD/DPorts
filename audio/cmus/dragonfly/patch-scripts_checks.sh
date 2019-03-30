--- scripts/checks.sh.orig	2019-01-29 09:09:08 UTC
+++ scripts/checks.sh
@@ -124,7 +124,7 @@ cc_cxx_common()
 	common_lf=
 
 	case `uname -s` in
-	*BSD)
+	*BSD|DragonFly)
 		common_cf="$common_cf -I/usr/local/include"
 		common_lf="$common_lf -L/usr/local/lib"
 		;;
