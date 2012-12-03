--- src/poudriere.d/common.sh.orig	2012-10-15 18:18:18.000000000 +0200
+++ src/poudriere.d/common.sh	2012-11-24 22:09:58.000000000 +0100
@@ -1,8 +1,6 @@
 #!/bin/sh
 
-# zfs namespace
-NS="poudriere"
-IPS="$(sysctl -n kern.features.inet 2>/dev/null || (sysctl -n net.inet 1>/dev/null 2>&1 && echo 1) || echo 0)$(sysctl -n kern.features.inet6 2>/dev/null || (sysctl -n net.inet6 1>/dev/null 2>&1 && echo 1) || echo 0)"
+BSDPLATFORM=`uname -s | tr '[:upper:]' '[:lower:]'`
 
 err() {
 	if [ $# -ne 2 ]; then
@@ -34,6 +32,16 @@
 	esac
 }
 
+if [ -f /sbin/zfs ]; then
+. $(dirname ${0})/common.sh.zfs
+elif [ -f /sbin/hammer ]; then
+. $(dirname ${0})/common.sh.hammer
+else
+err 1 "Unsupported filesystem"
+fi
+
+. $(dirname ${0})/common.sh.${BSDPLATFORM}
+
 log_start() {
 	local logfile=$1
 
@@ -88,26 +96,6 @@
 	fi
 }
 
-zget() {
-	[ $# -ne 1 ] && eargs property
-	zfs get -H -o value ${NS}:${1} ${JAILFS}
-}
-
-zset() {
-	[ $# -ne 2 ] && eargs property value
-	zfs set ${NS}:$1="$2" ${JAILFS}
-}
-
-pzset() {
-	[ $# -ne 2 ] && eargs property value
-	zfs set ${NS}:$1="$2" ${PTFS}
-}
-
-pzget() {
-	[ $# -ne 1 ] && eargs property
-	zfs get -H -o value ${NS}:${1} ${PTFS}
-}
-
 sig_handler() {
 	trap - SIGTERM SIGKILL
 	# Ignore SIGINT while cleaning up
@@ -163,121 +151,18 @@
 	fi
 }
 
-jail_exists() {
-	[ $# -ne 1 ] && eargs jailname
-	zfs list -rt filesystem -H -o ${NS}:type,${NS}:name ${ZPOOL}${ZROOTFS} | \
-		awk -v n=$1 'BEGIN { ret = 1 } $1 == "rootfs" && $2 == n { ret = 0; } END { exit ret }' && return 0
-	return 1
-}
-
-jail_runs() {
-	[ $# -ne 0 ] && eargs
-	jls -qj ${JAILNAME} name > /dev/null 2>&1 && return 0
-	return 1
-}
-
-jail_get_base() {
-	[ $# -ne 1 ] && eargs jailname
-	zfs list -rt filesystem -s name -H -o ${NS}:type,${NS}:name,mountpoint ${ZPOOL}${ZROOTFS} | \
-		awk -v n=$1 '$1 == "rootfs" && $2 == n  { print $3 }' | head -n 1
-}
-
-jail_get_version() {
-	[ $# -ne 1 ] && eargs jailname
-	zfs list -rt filesystem -s name -H -o ${NS}:type,${NS}:name,${NS}:version ${ZPOOL}${ZROOTFS} | \
-		awk -v n=$1 '$1 == "rootfs" && $2 == n { print $3 }' | head -n 1
-}
-
-jail_get_fs() {
-	[ $# -ne 1 ] && eargs jailname
-	zfs list -rt filesystem -s name -H -o ${NS}:type,${NS}:name,name ${ZPOOL}${ZROOTFS} | \
-		awk -v n=$1 '$1 == "rootfs" && $2 == n { print $3 }' | head -n 1
-}
-
-port_exists() {
-	[ $# -ne 1 ] && eargs portstree_name
-	zfs list -t filesystem -H -o ${NS}:type,${NS}:name,name | \
-		awk -v n=$1 'BEGIN { ret = 1 } $1 == "ports" && $2 == n { ret = 0; } END { exit ret }' && return 0
-	return 1
-}
-
-port_get_base() {
-	[ $# -ne 1 ] && eargs portstree_name
-	zfs list -t filesystem -H -o ${NS}:type,${NS}:name,mountpoint | \
-		awk -v n=$1 '$1 == "ports" && $2 == n { print $3 }'
-}
-
-port_get_fs() {
-	[ $# -ne 1 ] && eargs portstree_name
-	zfs list -t filesystem -H -o ${NS}:type,${NS}:name,name | \
-		awk -v n=$1 '$1 == "ports" && $2 == n { print $3 }'
-}
-
-get_data_dir() {
-	local data
-	if [ -n "${POUDRIERE_DATA}" ]; then
-		echo ${POUDRIERE_DATA}
-		return
-	fi
-	data=$(zfs list -rt filesystem -H -o ${NS}:type,mountpoint ${ZPOOL}${ZROOTFS} | awk '$1 == "data" { print $2 }' | head -n 1)
-	if [ -n "${data}" ]; then
-		echo $data
-		return
-	fi
-	zfs create -p -o ${NS}:type=data \
-		-o mountpoint=${BASEFS}/data \
-		${ZPOOL}${ZROOTFS}/data
-	echo "${BASEFS}/data"
-}
-
 fetch_file() {
 	[ $# -ne 2 ] && eargs destination source
 	fetch -p -o $1 $2 || fetch -p -o $1 $2
 }
 
-jail_create_zfs() {
-	[ $# -ne 5 ] && eargs name version arch mountpoint fs
-	local name=$1
-	local version=$2
-	local arch=$3
-	local mnt=$( echo $4 | sed -e "s,//,/,g")
-	local fs=$5
-	msg_n "Creating ${name} fs..."
-	zfs create -p \
-		-o ${NS}:type=rootfs \
-		-o ${NS}:name=${name} \
-		-o ${NS}:version=${version} \
-		-o ${NS}:arch=${arch} \
-		-o mountpoint=${mnt} ${fs} || err 1 " Fail" && echo " done"
-}
-
-jrun() {
-	[ $# -ne 1 ] && eargs network
-	local network=$1
-	local ipargs
-	if [ ${network} -eq 0 ]; then
-		case $IPS in
-		01) ipargs="ip6.addr=::1" ;;
-		10) ipargs="ip4.addr=127.0.0.1" ;;
-		11) ipargs="ip4.addr=127.0.0.1 ip6.addr=::1" ;;
-		esac
-	else
-		case $IPS in
-		01) ipargs="ip6=inherit" ;;
-		10) ipargs="ip4=inherit" ;;
-		11) ipargs="ip4=inherit ip6=inherit" ;;
-		esac
-	fi
-	jail -c persist name=${JAILNAME} ${ipargs} path=${JAILMNT} \
-		host.hostname=${JAILNAME} allow.sysvipc allow.mount \
-		allow.socket_af allow.raw_sockets allow.chflags
-}
-
 do_jail_mounts() {
 	[ $# -ne 1 ] && eargs should_mkdir
 	local should_mkdir=$1
 	local arch=$(zget arch)
 
+	mount_jailport ${JAILFS} ${JAILMNT}
+
 	# Only do this when starting the master jail, clones will already have the dirs
 	if [ ${should_mkdir} -eq 1 ]; then
 		mkdir -p ${JAILMNT}/proc
@@ -304,7 +189,7 @@
 	local verbose="$2"
 
 	[ ${verbose} -eq 1 ] && msg "Mounting /var/db/ports from: ${optionsdir}"
-	mount -t nullfs ${optionsdir} ${JAILMNT}/var/db/ports || err 1 "Failed to mount OPTIONS directory"
+	${NULLMOUNT} ${optionsdir} ${JAILMNT}/var/db/ports || err 1 "Failed to mount OPTIONS directory"
 }
 
 do_portbuild_mounts() {
@@ -313,9 +198,9 @@
 
 	# Only do this when starting the master jail, clones will already have the dirs
 	if [ ${should_mkdir} -eq 1 ]; then
-		mkdir -p ${PORTSDIR}/packages
+		mkdir -p ${STD_PACKAGES}
 		mkdir -p ${PKGDIR}/All
-		mkdir -p ${PORTSDIR}/distfiles
+		mkdir -p ${STD_DISTFILES}
 		if [ -d "${CCACHE_DIR:-/nonexistent}" ]; then
 			mkdir -p ${JAILMNT}${CCACHE_DIR} || err 1 "Failed to create ccache directory "
 			msg "Mounting ccache from: ${CCACHE_DIR}"
@@ -328,11 +213,11 @@
 		msg "Mounting packages from: ${PKGDIR}"
 	fi
 
-	mount -t nullfs ${PORTSDIR} ${JAILMNT}/usr/ports || err 1 "Failed to mount the ports directory "
-	mount -t nullfs ${PKGDIR} ${JAILMNT}/usr/ports/packages || err 1 "Failed to mount the packages directory "
+	${NULLMOUNT} ${PORTSDIR} ${JAILMNT}/${PORTSRC} || err 1 "Failed to mount the ports directory "
+	${NULLMOUNT} ${PKGDIR} ${JAILMNT}/${STD_PACKAGES} || err 1 "Failed to mount the packages directory "
 
 	if [ -d "${DISTFILES_CACHE:-/nonexistent}" ]; then
-		mount -t nullfs ${DISTFILES_CACHE} ${JAILMNT}/usr/ports/distfiles || err 1 "Failed to mount the distfile directory"
+		${NULLMOUNT} ${DISTFILES_CACHE} ${JAILMNT}/${STD_DISTFILES} || err 1 "Failed to mount the distfile directory"
 	fi
 	[ -n "${MFSSIZE}" ] && mdmfs -M -S -o async -s ${MFSSIZE} md ${JAILMNT}/wrkdirs
 	[ -n "${USE_TMPFS}" ] && mount -t tmpfs tmpfs ${JAILMNT}/wrkdirs
@@ -350,14 +235,14 @@
 
 	if [ -d "${CCACHE_DIR:-/nonexistent}" ]; then
 		# Mount user supplied CCACHE_DIR into /var/cache/ccache
-		mount -t nullfs ${CCACHE_DIR} ${JAILMNT}${CCACHE_DIR} || err 1 "Failed to mount the ccache directory "
+		${NULLMOUNT} ${CCACHE_DIR} ${JAILMNT}${CCACHE_DIR} || err 1 "Failed to mount the ccache directory "
 	fi
 }
 
 jail_start() {
 	[ $# -ne 0 ] && eargs
 	local arch=$(zget arch)
-	local NEEDFS="nullfs procfs"
+	local NEEDFS="${NULLFSREF} procfs"
 	if [ -z "${NOLINUX}" ]; then
 		if [ "${arch}" = "i386" -o "${arch}" = "amd64" ]; then
 			NEEDFS="${NEEDFS} linprocfs linsysfs"
@@ -371,8 +256,8 @@
 	jail_exists ${JAILNAME} || err 1 "No such jail: ${JAILNAME}"
 	jail_runs && err 1 "jail already running: ${JAILNAME}"
 	zset status "start:"
-	zfs destroy -r ${JAILFS}/build 2>/dev/null || :
-	zfs rollback -R ${JAILFS}@clean
+	zdelete ${JAILFS} build 2>/dev/null || :
+	zrollback ${JAILFS}@clean
 
 	msg "Mounting system devices for ${JAILNAME}"
 	do_jail_mounts 1
@@ -388,20 +273,21 @@
 jail_stop() {
 	[ $# -ne 0 ] && eargs
 	local mnt
-	jail_runs || err 1 "No such jail running: ${JAILNAME%-job-*}"
+	jail_runs || err 1 "No such jail running: ${JAILNAME}"
 	zset status "stop:"
 
-	jail -r ${JAILNAME%-job-*} >/dev/null
+	jail_soft_stop ${JAILNAME%-job-*}
 	# Shutdown all builders
 	if [ ${PARALLEL_JOBS} -ne 0 ]; then
 		# - here to only check for unset, {start,stop}_builders will set this to blank if already stopped
 		for j in ${JOBS-$(jot -w %02d ${PARALLEL_JOBS})}; do
-			jail -r ${JAILNAME%-job-*}-job-${j} >/dev/null 2>&1 || :
+			jail_soft_stop ${JAILNAME%-job-*}-job-${j} 2>&1 || :
 		done
 	fi
 	msg "Umounting file systems"
 	mnt=`realpath ${MASTERMNT:-${JAILMNT}}`
 	mount | awk -v mnt="${mnt}/" 'BEGIN{ gsub(/\//, "\\\/", mnt); } { if ($3 ~ mnt && $1 !~ /\/dev\/md/ ) { print $3 }}' |  sort -r | xargs umount -f || :
+	umount ${mnt} || :
 
 	if [ -n "${MFSSIZE}" ]; then
 		# umount the ${JAILMNT}/build/$jobno/wrkdirs
@@ -419,62 +305,10 @@
 			mdconfig -d -u $dev
 		fi
 	fi
-	zfs rollback -R ${JAILFS%/build/*}@clean
 	zset status "idle:"
 	export STATUS=0
 }
 
-port_create_zfs() {
-	[ $# -ne 3 ] && eargs name mountpoint fs
-	local name=$1
-	local mnt=$( echo $2 | sed -e 's,//,/,g')
-	local fs=$3
-	msg_n "Creating ${name} fs..."
-	zfs create -p \
-		-o mountpoint=${mnt} \
-		-o ${NS}:type=ports \
-		-o ${NS}:name=${name} \
-		${fs} || err 1 " Fail" && echo " done"
-}
-
-cleanup() {
-	[ -n "${CLEANED_UP}" ] && return 0
-	msg "Cleaning up"
-	# If this is a builder, don't cleanup, the master will handle that.
-	if [ -n "${MY_JOBID}" ]; then
-		[ -n "${PKGNAME}" ] && clean_pool ${PKGNAME} 1 || :
-		return 0
-
-	fi
-	# Prevent recursive cleanup on error
-	if [ -n "${CLEANING_UP}" ]; then
-		echo "Failure cleaning up. Giving up." >&2
-		return
-	fi
-	export CLEANING_UP=1
-	[ -z "${JAILNAME%-job-*}" ] && err 2 "Fail: Missing JAILNAME"
-	log_stop
-
-	if [ -d ${MASTERMNT:-${JAILMNT}}/poudriere/var/run ]; then
-		for pid in ${MASTERMNT:-${JAILMNT}}/poudriere/var/run/*.pid; do
-			# Ensure there is a pidfile to read or break
-			[ "${pid}" = "${MASTERMNT:-${JAILMNT}}/poudriere/var/run/*.pid" ] && break
-			pkill -15 -F ${pid} >/dev/null 2>&1 || :
-		done
-		wait
-	fi
-
-	zfs destroy -r ${JAILFS%/build/*}/build 2>/dev/null || :
-	zfs destroy -r ${JAILFS%/build/*}@prepkg 2>/dev/null || :
-	zfs destroy -r ${JAILFS%/build/*}@preinst 2>/dev/null || :
-	jail_stop
-	export CLEANED_UP=1
-}
-
-injail() {
-	jexec -U root ${JAILNAME} $@
-}
-
 sanity_check_pkgs() {
 	local ret=0
 	local depfile
@@ -500,16 +334,19 @@
 build_port() {
 	[ $# -ne 1 ] && eargs portdir
 	local portdir=$1
-	local port=${portdir##/usr/ports/}
+	local port=`echo ${portdir} | sed -e "s|^${PORTSRC}/||"`
 	local targets="check-config fetch checksum extract patch configure build run-depends install package ${PORTTESTING:+deinstall}"
 
 	for phase in ${targets}; do
 		zset status "${phase}:${port}"
 		if [ "${phase}" = "fetch" ]; then
-			jail -r ${JAILNAME} >/dev/null
+			jail_soft_stop ${JAILNAME}
 			jrun 1
 		fi
-		[ "${phase}" = "install" -a $ZVERSION -ge 28 ] && zfs snapshot ${JAILFS}@preinst
+		if [ "${phase}" = "install" -a $ZVERSION -ge 28 ]; then
+		   zkill ${JAILFS}@preinst
+		   zsnap ${JAILFS}@preinst
+		fi
 		if [ "${phase}" = "deinstall" ]; then
 			msg "Checking shared library dependencies"
 			if [ ${PKGNG} -eq 0 ]; then
@@ -532,7 +369,7 @@
 		echo "==================================================================="
 
 		if [ "${phase}" = "checksum" ]; then
-			jail -r ${JAILNAME} >/dev/null
+			jail_soft_stop ${JAILNAME}
 			jrun 0
 		fi
 		if [ "${phase}" = "deinstall" ]; then
@@ -554,7 +391,7 @@
 				local mod=$(mktemp ${jailbase}/tmp/mod.XXXXXX)
 				local mod1=$(mktemp ${jailbase}/tmp/mod1.XXXXXX)
 				local die=0
-				zfs diff -FH ${JAILFS}@preinst ${JAILFS} | \
+				zxdiff ${JAILFS}@preinst ${JAILFS} | \
 					while read mod type path; do
 					local ppath
 					ppath=`echo "$path" | sed -e "s,^${JAILMNT},," -e "s,^${PREFIX}/,," -e "s,^share/${portname},%%DATADIR%%," -e "s,^etc/${portname},%%ETCDIR%%,"`
@@ -610,17 +447,17 @@
 			fi
 		fi
 	done
-	jail -r ${JAILNAME} >/dev/null
+	jail_soft_stop ${JAILNAME}
 	jrun 0
 	zset status "idle:"
-	zfs destroy -r ${JAILFS}@preinst || :
+	zkill ${JAILFS}@preinst || :
 	return 0
 }
 
 save_wrkdir() {
 	[ $# -ne 1 ] && eargs port
 
-	local portdir="/usr/ports/${port}"
+	local portdir="${PORTSRC}/${port}"
 	local tardir=${POUDRIERE_DATA}/wrkdirs/${JAILNAME%-job-*}/${PTNAME}
 	local tarname=${tardir}/${PKGNAME}.${WRKDIR_ARCHIVE_FORMAT}
 	local mnted_portdir=${JAILMNT}/wrkdirs/${portdir}
@@ -639,58 +476,6 @@
 	job_msg "Saved ${port} wrkdir to: ${tarname}"
 }
 
-start_builders() {
-	local arch=$(zget arch)
-	local version=$(zget version)
-	local j mnt fs name
-
-	zfs create -o canmount=off ${JAILFS}/build
-
-	for j in ${JOBS}; do
-		mnt="${JAILMNT}/build/${j}"
-		fs="${JAILFS}/build/${j}"
-		name="${JAILNAME}-job-${j}"
-		zset status "starting_jobs:${j}"
-		mkdir -p "${mnt}"
-		zfs clone -o mountpoint=${mnt} \
-			-o ${NS}:name=${name} \
-			-o ${NS}:type=rootfs \
-			-o ${NS}:arch=${arch} \
-			-o ${NS}:version=${version} \
-			${JAILFS}@prepkg ${fs}
-		zfs snapshot ${fs}@prepkg
-		# Jail might be lingering from previous build. Already recursively
-		# destroyed all the builder datasets, so just try stopping the jail
-		# and ignore any errors
-		jail -r ${name} >/dev/null 2>&1 || :
-		MASTERMNT=${JAILMNT} JAILNAME=${name} JAILMNT=${mnt} JAILFS=${fs} do_jail_mounts 0
-		MASTERMNT=${JAILMNT} JAILNAME=${name} JAILMNT=${mnt} JAILFS=${fs} do_portbuild_mounts 0
-		MASTERMNT=${JAILMNT} JAILNAME=${name} JAILMNT=${mnt} JAILFS=${fs} jrun 0
-		JAILFS=${fs} zset status "idle:"
-	done
-}
-
-stop_builders() {
-	local j mnt
-
-	# wait for the last running processes
-	cat ${JAILMNT}/poudriere/var/run/*.pid 2>/dev/null | xargs pwait 2>/dev/null
-
-	msg "Stopping ${PARALLEL_JOBS} builders"
-
-	for j in ${JOBS}; do
-		jail -r ${JAILNAME}-job-${j} >/dev/null 2>&1 || :
-	done
-
-	mnt=`realpath ${JAILMNT}`
-	mount | awk -v mnt="${mnt}/build/" 'BEGIN{ gsub(/\//, "\\\/", mnt); } { if ($3 ~ mnt && $1 !~ /\/dev\/md/ ) { print $3 }}' |  sort -r | xargs umount -f 2>/dev/null || :
-
-	zfs destroy -r ${JAILFS}/build 2>/dev/null || :
-
-	# No builders running, unset JOBS
-	JOBS=""
-}
-
 build_stats_list() {
 	[ $# -ne 3 ] && eargs html_path type display_name
 	local html_path="$1"
@@ -827,40 +612,6 @@
 EOF
 }
 
-build_queue() {
-
-	local activity j cnt mnt fs name pkgname
-
-	while :; do
-		activity=0
-		for j in ${JOBS}; do
-			mnt="${JAILMNT}/build/${j}"
-			fs="${JAILFS}/build/${j}"
-			name="${JAILNAME}-job-${j}"
-			if [ -f  "${JAILMNT}/poudriere/var/run/${j}.pid" ]; then
-				if pgrep -F "${JAILMNT}/poudriere/var/run/${j}.pid" >/dev/null 2>&1; then
-					continue
-				fi
-				build_stats
-				rm -f "${JAILMNT}/poudriere/var/run/${j}.pid"
-				JAILFS="${fs}" zset status "idle:"
-			fi
-			pkgname=$(next_in_queue)
-			if [ -z "${pkgname}" ]; then
-				# pool empty ?
-				[ $(stat -f '%z' ${JAILMNT}/poudriere/pool) -eq 2 ] && return
-				break
-			fi
-			activity=1
-			MASTERMNT=${JAILMNT} JAILNAME="${name}" JAILMNT="${mnt}" JAILFS="${fs}" \
-				MY_JOBID="${j}" \
-				build_pkg "${pkgname}" >/dev/null 2>&1 &
-			echo "$!" > ${JAILMNT}/poudriere/var/run/${j}.pid
-		done
-		# Sleep briefly if still waiting on builds, to save CPU
-		[ $activity -eq 0 ] && sleep 0.1
-	done
-}
 
 # Build ports in parallel
 # Returns when all are built.
@@ -923,11 +674,11 @@
 
 	PKGNAME="${pkgname}" # set ASAP so cleanup() can use it
 	port=$(cache_get_origin ${pkgname})
-	portdir="/usr/ports/${port}"
+	portdir="${PORTSRC}/${port}"
 
 	job_msg "Starting build of ${port}"
 	zset status "starting:${port}"
-	zfs rollback -r ${JAILFS}@prepkg || err 1 "Unable to rollback ${JAILFS}"
+	zrollback ${JAILFS}@prepkg || err 1 "Unable to rollback ${JAILFS}"
 
 	# If this port is IGNORED, skip it
 	# This is checked here instead of when building the queue
@@ -998,10 +749,10 @@
 	[ $# -ne 1 ] && eargs directory
 	local dir=$1
 	local makeargs="-VPKG_DEPENDS -VBUILD_DEPENDS -VEXTRACT_DEPENDS -VLIB_DEPENDS -VPATCH_DEPENDS -VFETCH_DEPENDS -VRUN_DEPENDS"
-	[ -d "${PORTSDIR}/${dir}" ] && dir="/usr/ports/${dir}"
+	[ -d "${PORTSDIR}/${dir}" ] && dir="${PORTSRC}/${dir}"
 
 	injail make -C ${dir} $makeargs | tr '\n' ' ' | \
-		sed -e "s,[[:graph:]]*/usr/ports/,,g" -e "s,:[[:graph:]]*,,g" | sort -u
+		sed -e "s,[[:graph:]]*${PORTSRC},,g" -e "s,:[[:graph:]]*,,g" | sort -u
 }
 
 deps_file() {
@@ -1149,7 +900,7 @@
 		o=$(pkg_get_origin ${pkg})
 		v=${pkg##*-}
 		v=${v%.*}
-		if [ ! -d "${JAILMNT}/usr/ports/${o}" ]; then
+		if [ ! -d "${JAILMNT}/${PORTSRC}/${o}" ]; then
 			msg "${o} does not exist anymore. Deleting stale ${pkg##*/}"
 			delete_pkg ${pkg}
 			continue
@@ -1164,7 +915,7 @@
 
 		# Check if the compiled options match the current options from make.conf and /var/db/options
 		if [ "${CHECK_CHANGED_OPTIONS:-no}" != "no" ]; then
-			current_options=$(injail make -C /usr/ports/${o} pretty-print-config | tr ' ' '\n' | sed -n 's/^\+\(.*\)/\1/p' | sort | tr '\n' ' ')
+			current_options=$(injail make -C ${PORTSRC}/${o} pretty-print-config | tr ' ' '\n' | sed -n 's/^\+\(.*\)/\1/p' | sort | tr '\n' ' ')
 			compiled_options=$(pkg_get_options ${pkg})
 
 			if [ "${compiled_options}" != "${current_options}" ]; then
@@ -1199,7 +950,7 @@
 
 	# Add to cache if not found.
 	if [ -z "${pkgname}" ]; then
-		pkgname=$(injail make -C /usr/ports/${origin} -VPKGNAME)
+		pkgname=$(injail make -C ${PORTSRC}/${origin} -VPKGNAME)
 		# Make sure this origin did not already exist
 		existing_origin=$(cache_get_origin "${pkgname}")
 		[ -n "${existing_origin}" ] &&  err 1 "Duplicated origin for ${pkgname}: ${origin} AND ${existing_origin}. Rerun with -D to see which ports are depending on these."
@@ -1236,8 +987,7 @@
 
 listed_ports() {
 	if [ ${ALL:-0} -eq 1 ]; then
-		PORTSDIR=`port_get_base ${PTNAME}`
-		[ -d "${PORTSDIR}/ports" ] && PORTSDIR="${PORTSDIR}/ports"
+		PORTSDIR=$(get_portsdir ${PTNAME})
 		for cat in $(awk '$1 == "SUBDIR" { print $3}' ${PORTSDIR}/Makefile); do
 			awk -v cat=${cat}  '$1 == "SUBDIR" { print cat"/"$3}' ${PORTSDIR}/${cat}/Makefile
 		done
@@ -1332,8 +1082,7 @@
 	export FORCE_PACKAGE=yes
 	export USER=root
 	export HOME=/root
-	PORTSDIR=`port_get_base ${PTNAME}`
-	[ -d "${PORTSDIR}/ports" ] && PORTSDIR="${PORTSDIR}/ports"
+	PORTSDIR=$(get_portsdir ${PTNAME})
 	POUDRIERED=${SCRIPTPREFIX}/../../etc/poudriere.d
 	[ -z "${JAILMNT}" ] && err 1 "No path of the base of the jail defined"
 	[ -z "${PORTSDIR}" ] && err 1 "No ports directory defined"
@@ -1357,9 +1106,9 @@
 
 	msg "Populating LOCALBASE"
 	mkdir -p ${JAILMNT}/${MYBASE:-/usr/local}
-	injail /usr/sbin/mtree -q -U -f /usr/ports/Templates/BSD.local.dist -d -e -p ${MYBASE:-/usr/local} >/dev/null
+	injail /usr/sbin/mtree -q -U -f ${PORTSRC}/Templates/BSD.local.dist -d -e -p ${MYBASE:-/usr/local} >/dev/null
 
-	WITH_PKGNG=$(injail make -f /usr/ports/Mk/bsd.port.mk -V WITH_PKGNG)
+	WITH_PKGNG=$(injail make -f ${PORTSRC}/Mk/bsd.port.mk -V WITH_PKGNG)
 	if [ -n "${WITH_PKGNG}" ]; then
 		export PKGNG=1
 		export PKG_EXT="txz"
@@ -1381,26 +1130,40 @@
 test -f ${SCRIPTPREFIX}/../../etc/poudriere.conf || err 1 "Unable to find ${SCRIPTPREFIX}/../../etc/poudriere.conf"
 . ${SCRIPTPREFIX}/../../etc/poudriere.conf
 
-[ -z ${ZPOOL} ] && err 1 "ZPOOL variable is not set"
 [ -z ${BASEFS} ] && err 1 "Please provide a BASEFS variable in your poudriere.conf"
 
 trap sig_handler SIGINT SIGTERM SIGKILL
 trap exit_handler EXIT
 trap siginfo_handler SIGINFO
 
-# Test if spool exists
-zpool list ${ZPOOL} >/dev/null 2>&1 || err 1 "No such zpool: ${ZPOOL}"
-ZVERSION=$(zpool list -H -oversion ${ZPOOL})
-# Pool version has now
-if [ "${ZVERSION}" = "-" ]; then
-	ZVERSION=29
-fi
+post_conf_check
 
 : ${SVN_HOST="svn.FreeBSD.org"}
 : ${GIT_URL="git://github.com/freebsd/freebsd-ports.git"}
 : ${FREEBSD_HOST="ftp://${FTP_HOST:-ftp.FreeBSD.org}"}
 : ${ZROOTFS="/poudriere"}
 
+# this could be put in common.sh.${BSDPLATFORM} ...
+case ${BSDPLATFORM} in
+	dragonfly)
+		PORTSRC=/usr/dports
+		STD_DISTFILES=/usr/distfiles
+		STD_PACKAGES=/usr/packages
+		NULLMOUNT="/sbin/mount_null"
+		NULLFSREF="null"
+		;;
+	freebsd)
+		PORTSRC=/usr/ports
+		STD_DISTFILES=${PORTSRC}/distfiles
+		STD_PACKAGES=${PORTSRC}/packages
+		NULLMOUNT="/sbin/mount -t nullfs"
+		NULLFSREF="nullfs"
+		;;
+	*)
+		err 1 "Unsupported platform"
+		;;
+esac
+
 case ${ZROOTFS} in
 	[!/]*)
 		err 1 "ZROOTFS shoud start with a /"
@@ -1415,9 +1178,3 @@
 	*) err 1 "invalid format for WRKDIR_ARCHIVE_FORMAT: ${WRKDIR_ARCHIVE_FORMAT}" ;;
 esac
 
-case ${PARALLEL_JOBS} in
-''|*[!0-9]*)
-	PARALLEL_JOBS=$(sysctl -n hw.ncpu)
-	;;
-esac
-
