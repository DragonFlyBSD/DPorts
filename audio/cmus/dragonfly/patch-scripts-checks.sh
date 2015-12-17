--- scripts/checks.sh.intermediate	2015-12-17 17:25:50.000000000 +0200
+++ scripts/checks.sh
@@ -124,7 +124,7 @@ cc_cxx_common()
 	common_lf=
 
 	case `uname -s` in
-	*BSD)
+	*BSD|DragonFly)
 		common_cf="$common_cf -I/usr/local/include"
 		common_lf="$common_lf -L/usr/local/lib"
 		;;
