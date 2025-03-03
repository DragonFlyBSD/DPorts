--- make-config.sh.orig	Thu May 30 07:25:20 2024
+++ make-config.sh	Mon Mar
@@ -320,7 +320,7 @@ case `uname` in
         esac
         ;;
     DragonFly)
-	sbcl_os="dragonflybsd"
+	sbcl_os="dragonfly"
 	;;
     Darwin)
         sbcl_os="darwin"
@@ -597,7 +597,7 @@ case "$sbcl_os" in
         link_or_copy $sbcl_arch-haiku-os.h target-arch-os.h
         link_or_copy haiku-os.h target-os.h
         ;;
-    *bsd)
+    *bsd|dragonfly*)
         printf ' :unix :bsd :elf' >> $ltf
         # FIXME: can we enable :gcc-tls across all variants?
         link_or_copy $sbcl_arch-bsd-os.h target-arch-os.h
@@ -609,6 +609,11 @@ case "$sbcl_os" in
                 if [ $sbcl_os = "gnu-kfreebsd" ]; then
                     printf ' :gnu-kfreebsd' >> $ltf
                 fi
+                link_or_copy Config.$sbcl_arch-$sbcl_os Config
+                ;;
+            dragonfly)
+                printf ' :dragonfly' >> $ltf
+                printf ' :gcc-tls' >> $ltf
                 link_or_copy Config.$sbcl_arch-$sbcl_os Config
                 ;;
             openbsd)
