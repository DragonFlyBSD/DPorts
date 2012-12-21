--- src/poudriere.d/ports.sh.orig	2012-12-01 01:15:48.000000000 +0100
+++ src/poudriere.d/ports.sh	2012-12-20 23:59:44.000000000 +0100
@@ -21,12 +21,11 @@
                      them.
     -p name       -- specifies the name of the portstree we workon . If not
                      specified, work on a portstree called \"default\".
-    -f fs         -- FS name (tank/jails/myjail) if fs is \"none\" then do not
-                     create on zfs
+    -f fs         -- FS name (/pfs/poudriere.jails.myjail)
     -M mountpoint -- mountpoint
     -m method     -- when used with -c, specify the method used to update the
-                     tree by default it is portsnap, possible usage are
-                     \"csup\", \"portsnap\", \"svn\", \"svn+http\", \"svn+ssh\""
+                     tree.  The default is git, possible usage are \"git\",
+                     \"rsync\""
 
 	exit 1
 }
@@ -37,6 +36,8 @@
 DELETE=0
 LIST=0
 QUIET=0
+METHOD=git
+PTNAME=default
 while getopts "cFudlp:qf:M:m" FLAG; do
 	case "${FLAG}" in
 		c)
@@ -49,7 +50,7 @@
 			UPDATE=1
 			;;
 		p)
-			PTNAME=${OPTARG}
+			PTNAME=$(echo ${OPTARG} | sed -e 's| |_|g')
 			;;
 		d)
 			DELETE=1
@@ -77,166 +78,72 @@
 
 [ $(( CREATE + UPDATE + DELETE + LIST )) -lt 1 ] && usage
 
-METHOD=${METHOD:-portsnap}
-PTNAME=${PTNAME:-default}
-
-case ${METHOD} in
-csup)
-	[ -z ${CSUP_HOST} ] && err 2 "CSUP_HOST has to be defined in the configuration to use csup"
-	;;
-portsnap);;
-svn+http);;
-svn+ssh);;
-svn);;
-git);;
-*) usage;;
-esac
+if [ "${METHOD}" = "rsync" ] && [ -z "${DPORTS_RSYNC_LOC}" ]; then
+	err 2 "Define DPORTS_RSYNC_LOC in poudriere.conf first!"
+fi
 
 if [ ${LIST} -eq 1 ]; then
-	format='%-20s %-10s %s\n'
-	[ $QUIET -eq 0 ] && \
-		printf "${format}" "PORTSTREE" "METHOD" "PATH"
-	porttree_list | while read ptname ptmethod ptpath; do
-		printf "${format}" ${ptname} ${ptmethod} ${ptpath}
-	done
+	print_ports_table ${QUIET}
 else
 	test -z "${PTNAME}" && usage
 fi
+
 if [ ${CREATE} -eq 1 ]; then
 	# test if it already exists
 	porttree_exists ${PTNAME} && err 2 "The ports tree ${PTNAME} already exists"
-	: ${PTMNT="${BASEFS:=/usr/local${ZROOTFS}}/ports/${PTNAME}"}
-	: ${PTFS="${ZPOOL}${ZROOTFS}/ports/${PTNAME}"}
+	: ${PTMNT="${BASEFS}/ports/${PTNAME}"}
+	: ${PTFS=$(pfs_path "${ZROOTFS}/ports/${PTNAME}")}
 	porttree_create_zfs ${PTNAME} ${PTMNT} ${PTFS}
 	if [ $FAKE -eq 0 ]; then
+		pzset method ${METHOD}
 		case ${METHOD} in
-		csup)
-			echo "/!\ WARNING /!\ csup is deprecated and will soon be dropped"
-			mkdir ${PTMNT}/db
-			echo "*default prefix=${PTMNT}
-*default base=${PTMNT}/db
-*default release=cvs tag=.
-*default delete use-rel-suffix
-ports-all" > ${PTMNT}/csup
-			csup -z -h ${CSUP_HOST} ${PTMNT}/csup || {
-				if [ ${PTFS} != "none" ]; then
-					zfs destroy ${PTFS}
-				else
-					rm -rf ${PTMNT}
-					sed -i "" "s/${PTNAME}/d" \
-						${POUDRIERED}/portstrees
-				fi
-				err 1 " Fail"
-			}
-			;;
-		portsnap)
-			mkdir ${PTMNT}/snap
-			msg "Extracting portstree \"${PTNAME}\"..."
-			mkdir ${PTMNT}/ports
-			/usr/sbin/portsnap -d ${PTMNT}/snap -p ${PTMNT}/ports fetch extract || \
-			/usr/sbin/portsnap -d ${PTMNT}/snap -p ${PTMNT}/ports fetch extract || \
-			{
-				if [ ${PTFS} != "none" ]; then
-					zfs destroy ${PTFS}
-				else
-					rm -rf ${PTMNT}
-					sed -i "" "s/${PTNAME}/d" \
-						${POUDRIERED}/portstrees
-				fi
-				err 1 " Fail"
-			}
-			;;
-		svn*)
-			case ${METHOD} in
-			svn+http) proto="http" ;;
-			svn+ssh) proto="svn+ssh" ;;
-			svn) proto="svn" ;;
-			esac
-
-			msg_n "Checking out the ports tree..."
-			svn -q co ${proto}://${SVN_HOST}/ports/head \
-				${PTMNT} || {
-				if [ ${PTFS} != "none" ]; then
-					zfs destroy ${PTFS}
-				else
-					rm -rf ${PTMNT}
-					sed -i "" "s/${PTNAME}/d" \
-						${POUDRIERED}/portstrees
-				fi
-				err 1 " Fail"
-			}
-			echo " done"
-			;;
+		rsync)
+			msg "Cloning the ports tree via rsync"
+			cpdup -VV -i0 ${DPORTS_RSYNC_LOC}/ ${PTFS}/ || {
+ 				err 1 " Fail"
+ 			}
+ 			echo " done"
+ 			;;
 		git)
-			msg "Cloning the ports tree"
-			git clone ${GIT_URL} ${PTMNT} || {
-				if [ ${PTFS} != "none" ]; then
-					zfs destroy ${PTFS}
-				else
-					rm -rf ${PTMNT}
-					sed -i "" "/${PTNAME}/d" \
-						${POUDRIERED}/portstrees
-				fi
+			msg "Retrieving the ports tree via git"
+			git clone --depth 1 ${DPORTS_URL} ${PTFS} || {
+ 				err 1 " Fail"
 			}
 			echo " done"
 			;;
 		esac
-		pzset method ${METHOD}
-		sed -i "" "s/__METHOD__/${METHOD}/g" ${POUDRIERED}/portstrees
 	fi
 fi
 
 if [ ${DELETE} -eq 1 ]; then
 	porttree_exists ${PTNAME} || err 2 "No such ports tree ${PTNAME}"
-	PTMNT=$(porttree_get_base ${PTNAME})
-	[ -d "${PTMNT}/ports" ] && PORTSMNT="${PTMNT}/ports"
-	/sbin/mount -t nullfs | /usr/bin/grep -q "${PORTSMNT:-${PTMNT}} on" \
-		&& err 1 "Ports tree \"${PTNAME}\" is currently mounted and being used."
+	PTMNT=$(portree_get_base ${PTNAME})
+	PTFS=$(portree_get_fs ${PTNAME})
+	[ -n "$(check_mount ${PTFS})" ] && \
+		err 1 "Ports tree \"${PTNAME}\" is currently mounted and being used."
 	msg "Deleting portstree \"${PTNAME}\""
-	PTFS=$(porttree_get_fs ${PTNAME})
-	if [ -n "${PTFS}" ]; then
-		zfs destroy -r ${PTFS}
-	else
-		rm -rf ${PTMNT}
-		sed -i "" "/${PTNAME}/d" \
-			${POUDRIERED}/portstrees
-	fi
+	zkillfs ${PTFS} ports/${PTNAME}
+	rmdir ${PTMNT}
 fi
 
 if [ ${UPDATE} -eq 1 ]; then
 	porttree_exists ${PTNAME} || err 2 "No such ports tree ${PTNAME}"
-	METHOD=$(porttree_get_method ${PTNAME})
 	PTMNT=$(porttree_get_base ${PTNAME})
-	[ -d "${PTMNT}/ports" ] && PORTSMNT="${PTMNT}/ports"
-	/sbin/mount -t nullfs | /usr/bin/grep -q "${PORTSMNT:-${PTMNT}} on" \
-		&& err 1 "Ports tree \"${PTNAME}\" is currently mounted and being used."
+ 	PTFS=$(porttree_get_fs ${PTNAME})
+	[ -n "$(check_mount ${PTFS})" ] && \
+		err 1 "Ports tree \"${PTNAME}\" is currently mounted and being used."
 	msg "Updating portstree \"${PTNAME}\""
+	METHOD=$(pzget method)
 	if [ ${METHOD} = "-" ]; then
-		METHOD=portsnap
+		METHOD=git
 		pzset method ${METHOD}
 	fi
 	case ${METHOD} in
-	csup)
-		echo "/!\ WARNING /!\ csup is deprecated and will soon be dropped"
-		[ -z ${CSUP_HOST} ] && err 2 "CSUP_HOST has to be defined in the configuration to use csup"
-		mkdir -p ${PTMNT}/db
-		echo "*default prefix=${PTMNT}
-*default base=${PTMNT}/db
-*default release=cvs tag=.
-*default delete use-rel-suffix
-ports-all" > ${PTMNT}/csup
-		csup -z -h ${CSUP_HOST} ${PTMNT}/csup
-		;;
-	portsnap|"")
-		PSCOMMAND=fetch
-		[ -t 0 ] || PSCOMMAND=cron
-		/usr/sbin/portsnap -d ${PTMNT}/snap -p ${PORTSMNT} ${PSCOMMAND} update
-		;;
-	svn*)
-		msg_n "Updating the ports tree..."
-		svn -q update ${PORTSMNT:-${PTMNT}}
-		echo " done"
-		;;
+	rsync)
+		msg "Updating the ports tree via rsync"
+		cpdup -VV -i0 ${DPORTS_RSYNC_LOC}/ ${PTFS}/
+ 		echo " done"
+ 		;;
 	git)
 		msg "Pulling from ${GIT_URL}"
 		cd ${PORTSMNT:-${PTMNT}} && git pull
