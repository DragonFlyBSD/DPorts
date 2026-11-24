--- acinclude.m4.orig
+++ acinclude.m4
@@ -115,11 +115,13 @@
 
 
 		AC_MSG_RESULT([Searching OpenSSL Version: $library_includes]);
-		ver=`grep "^ *# *define  *OPENSSL_VERSION_NUMBER" "$library_includes" | sed 's/.*0x/0x/g' | sed 's|\L||g'`;
+		ver=`grep "^ *# *define  *OPENSSL_VERSION_NUMBER  *0x" "$library_includes" | sed 's/.*0x/0x/g' | sed 's|\L||g'`;
 		if [[ "x$ver" == "x" ]] ; then
-		   pver=`grep "^ *# *define OPENSSL_VERSION_PRE_RELEASE" "$library_includes" | sed 's|.* "|"|g' | sed 's|""|fL|g' | sed 's|".*"|0L|g'`
-		   bver=`grep "^ *# *define OPENSSL_VERSION_STR" "$library_includes"  | sed 's|.* "||g' | sed 's|".*||g' | sed 's|\.| |g' | xargs printf "0x%1x%02X%02X" `
-		   ver="$bver$pver"
+		   dnl OpenSSL 3 builds OPENSSL_VERSION_NUMBER from MAJOR, MINOR and PATCH.
+		   vmaj=`sed -n 's/^ *# *define  *OPENSSL_VERSION_MAJOR  *\([[0-9]]*\).*/\1/p' "$library_includes"`
+		   vmin=`sed -n 's/^ *# *define  *OPENSSL_VERSION_MINOR  *\([[0-9]]*\).*/\1/p' "$library_includes"`
+		   vpat=`sed -n 's/^ *# *define  *OPENSSL_VERSION_PATCH  *\([[0-9]]*\).*/\1/p' "$library_includes"`
+		   ver=`printf "0x%x%02x%04x0" $vmaj $vmin $vpat`
 		fi
                 detected_v=`echo $((ver))`
 		required_v=`echo $(($_version))`
