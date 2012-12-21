--- src/poudriere.d/common.sh.orig	2012-12-01 01:15:48.000000000 +0100
+++ src/poudriere.d/common.sh	2012-12-21 10:57:59.000000000 +0100
@@ -1,8 +1,6 @@
 #!/bin/sh
 
-# zfs namespace
-NS="poudriere"
-IPS="$(sysctl -n kern.features.inet 2>/dev/null || (sysctl -n net.inet 1>/dev/null 2>&1 && echo 1) || echo 0)$(sysctl -n kern.features.inet6 2>/dev/null || (sysctl -n net.inet6 1>/dev/null 2>&1 && echo 1) || echo 0)"
+BSDPLATFORM=`uname -s | tr '[:upper:]' '[:lower:]'`
 
 dir_empty() {
 	find $1 -maxdepth 0 -empty
@@ -49,6 +47,39 @@
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
+: ${HOOKDIR="/usr/local/etc/hooks_poudriere"}
+
+loadhook() {
+  local hookfile=${HOOKDIR}/hook_${1}.sh
+  if [ -f ${hookfile} ]; then
+    . ${hookfile}
+  fi
+}
+
+firehook() {
+  eval "local HOOK_DEFINED=\$SET_${1}"
+  if [ -n "${HOOK_DEFINED}" ]; then
+    $HOOK_DEFINED $@
+  fi
+}
+
+loadhook port_build_success
+loadhook port_build_failure
+loadhook test_port_start
+loadhook test_port_ended
+loadhook bulk_build_start
+loadhook bulk_build_ended
+
 log_start() {
 	local logfile=$1
 
@@ -103,26 +134,6 @@
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
@@ -161,14 +172,14 @@
 		queue_width=3
 	fi
 
-	printf "[${JAILNAME}] [${status}] [%0${queue_width}d/%0${queue_width}d] Built: %-${queue_width}d Failed: %-${queue_width}d  Ignored: %-${queue_width}d  Skipped: %-${queue_width}d  \n" \
+	printf "[${JAILNAME}] [${status}] [%0${queue_width}d/%0${queue_width}d] Built: %-${queue_width}d Failed: %-${queue_width}d  Ignored: %-${queue_width}d  Skipped: %-${queue_width}d\n" \
 	  ${ndone} ${nbq} ${nbb} ${nbf} ${nbi} ${nbs}
 
 	# Skip if stopping or starting jobs
 	if [ -n "${JOBS}" -a "${status#starting_jobs:}" = "${status}" -a "${status}" != "stopping_jobs:" ]; then
 		for j in ${JOBS}; do
 			# Ignore error here as the zfs dataset may not be cloned yet.
-			status=$(JAILFS=${JAILFS}/build/${j} zget status 2>/dev/null || :)
+			status=$(JAILNAME=${JAILNAME}-job-${j} zget status)
 			# Skip builders not started yet
 			[ -z "${status}" ] && continue
 			# Hide idle workers
@@ -178,364 +189,18 @@
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
-porttree_list() {
-	local name method mntpoint n format
-	# Combine local ZFS and manual list
-	zfs list -t filesystem -H -o ${NS}:type,${NS}:name,${NS}:method,mountpoint | \
-		awk '$1 == "ports" { print $2 " " $3 " " $4 }'
-	if [ -f "${POUDRIERED}/portstrees" ]; then
-		# Validate proper format
-		format="Format expected: NAME METHOD PATH"
-		n=0
-		while read name method mntpoint; do
-			n=$((n + 1))
-			[ -z "${name###*}" ] && continue # Skip comments
-			[ -n "${name%%/*}" ] || \
-				err 1 "$(realpath ${POUDRIERED}/portstrees):${n}: Invalid name '${name}'. ${format}"
-			[ -n "${method}" -a -n "${method%%/*}" ] || \
-				err 1 "$(realpath ${POUDRIERED}/portstrees):${n}: Missing method for '${name}'. ${format}"
-			[ -n "${mntpoint}" ] || \
-				err 1 "$(realpath ${POUDRIERED}/portstrees):${n}: Missing path for '${name}'. ${format}"
-			[ -z "${mntpoint%%/*}" ] || \
-				err 1 "$(realpath ${POUDRIERED}/portstrees):${n}: Invalid path '${mntpoint}' for '${name}'. ${format}"
-			echo "${name} ${method} ${mntpoint}"
-		done < ${POUDRIERED}/portstrees
-	fi
-	# Outputs: name method mountpoint
-}
-
-porttree_get_method() {
-	[ $# -ne 1 ] && eargs portstree_name
-	porttree_list | awk -v portstree_name=$1 '$1 == portstree_name {print $2}'
-}
-
-porttree_exists() {
-	[ $# -ne 1 ] && eargs portstree_name
-	porttree_list |
-		awk -v portstree_name=$1 '
-		BEGIN { ret = 1 }
-		$1 == portstree_name {ret = 0; }
-		END { exit ret }
-		' && return 0
-	return 1
-}
-
-porttree_get_base() {
-	[ $# -ne 1 ] && eargs portstree_name
-	porttree_list | awk -v portstree_name=$1 '$1 == portstree_name { print $3 }'
-}
-
-porttree_get_fs() {
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
-do_jail_mounts() {
-	[ $# -ne 1 ] && eargs should_mkdir
-	local should_mkdir=$1
-	local arch=$(zget arch)
-
-	# Only do this when starting the master jail, clones will already have the dirs
-	if [ ${should_mkdir} -eq 1 ]; then
-		mkdir -p ${JAILMNT}/proc
-	fi
-
-	mount -t devfs devfs ${JAILMNT}/dev
-	mount -t fdescfs fdesc ${JAILMNT}/dev/fd
-	mount -t procfs proc ${JAILMNT}/proc
-
-	if [ -z "${NOLINUX}" ]; then
-		if [ "${arch}" = "i386" -o "${arch}" = "amd64" ]; then
-			if [ ${should_mkdir} -eq 1 ]; then
-				mkdir -p ${JAILMNT}/compat/linux/proc
-				mkdir -p ${JAILMNT}/compat/linux/sys
-			fi
-			mount -t linprocfs linprocfs ${JAILMNT}/compat/linux/proc
-#			mount -t linsysfs linsysfs ${JAILMNT}/compat/linux/sys
-		fi
-	fi
-}
-
 use_options() {
 	[ $# -ne 2 ] && eargs optionsdir verbose
 	local optionsdir="$(realpath "$1")"
 	local verbose="$2"
 
 	[ ${verbose} -eq 1 ] && msg "Mounting /var/db/ports from: ${optionsdir}"
-	mount -t nullfs ${optionsdir} ${JAILMNT}/var/db/ports || err 1 "Failed to mount OPTIONS directory"
-}
-
-do_portbuild_mounts() {
-	[ $# -ne 1 ] && eargs should_mkdir
-	local should_mkdir=$1
-
-	# Only do this when starting the master jail, clones will already have the dirs
-	if [ ${should_mkdir} -eq 1 ]; then
-		mkdir -p ${PORTSDIR}/packages
-		mkdir -p ${PKGDIR}/All
-		mkdir -p ${PORTSDIR}/distfiles
-		if [ -d "${CCACHE_DIR:-/nonexistent}" ]; then
-			mkdir -p ${JAILMNT}${CCACHE_DIR} || err 1 "Failed to create ccache directory "
-			msg "Mounting ccache from: ${CCACHE_DIR}"
-			export CCACHE_DIR
-			export WITH_CCACHE_BUILD=yes
-		fi
-		# Check for invalid options-JAILNAME created by bad options.sh
-		[ -d ${POUDRIERED}/options-${JAILNAME%-job-*} ] && err 1 "Please move your options-${JAILNAME%-job-*} to ${JAILNAME%-job-*}-options"
-
-		msg "Mounting packages from: ${PKGDIR}"
-	fi
-
-	mount -t nullfs ${PORTSDIR} ${JAILMNT}/usr/ports || err 1 "Failed to mount the ports directory "
-	mount -t nullfs ${PKGDIR} ${JAILMNT}/usr/ports/packages || err 1 "Failed to mount the packages directory "
-
-	if [ "$(realpath ${DISTFILES_CACHE:-/nonexistent})" != "$(realpath ${PORTSDIR}/distfiles)" ]; then
-		mount -t nullfs ${DISTFILES_CACHE} ${JAILMNT}/usr/ports/distfiles || err 1 "Failed to mount the distfile directory"
-	fi
-	[ -n "${MFSSIZE}" ] && mdmfs -M -S -o async -s ${MFSSIZE} md ${JAILMNT}/wrkdirs
-	[ -n "${USE_TMPFS}" ] && mount -t tmpfs tmpfs ${JAILMNT}/wrkdirs
-
-	# Order is JAILNAME-SETNAME, then SETNAME, then JAILNAME, then default.
-	if [ -n "${SETNAME}" -a -d ${POUDRIERED}/${JAILNAME%-job-*}${SETNAME}-options ]; then
-		use_options ${POUDRIERED}/${JAILNAME%-job-*}${SETNAME}-options ${should_mkdir}
-	elif [ -d ${POUDRIERED}/${SETNAME#-}-options ]; then
-		use_options ${POUDRIERED}/${SETNAME#-}-options ${should_mkdir}
-	elif [ -d ${POUDRIERED}/${JAILNAME%-job-*}-options ]; then
-		use_options ${POUDRIERED}/${JAILNAME%-job-*}-options ${should_mkdir}
-	elif [ -d ${POUDRIERED}/options ]; then
-		use_options ${POUDRIERED}/options ${should_mkdir}
-	fi
-
-	if [ -d "${CCACHE_DIR:-/nonexistent}" ]; then
-		# Mount user supplied CCACHE_DIR into /var/cache/ccache
-		mount -t nullfs ${CCACHE_DIR} ${JAILMNT}${CCACHE_DIR} || err 1 "Failed to mount the ccache directory "
-	fi
-}
-
-jail_start() {
-	[ $# -ne 0 ] && eargs
-	local arch=$(zget arch)
-	local NEEDFS="nullfs procfs"
-	if [ -z "${NOLINUX}" ]; then
-		if [ "${arch}" = "i386" -o "${arch}" = "amd64" ]; then
-			NEEDFS="${NEEDFS} linprocfs linsysfs"
-			sysctl -n compat.linux.osrelease >/dev/null 2>&1 || kldload linux
-		fi
-	fi
-	[ -n "${USE_TMPFS}" ] && NEEDFS="${NEEDFS} tmpfs"
-	for fs in ${NEEDFS}; do
-		lsvfs $fs >/dev/null 2>&1 || kldload $fs
-	done
-	jail_exists ${JAILNAME} || err 1 "No such jail: ${JAILNAME}"
-	jail_runs && err 1 "jail already running: ${JAILNAME}"
-	zset status "start:"
-	zfs destroy -r ${JAILFS}/build 2>/dev/null || :
-	zfs rollback -R ${JAILFS}@clean
-
-	msg "Mounting system devices for ${JAILNAME}"
-	do_jail_mounts 1
-
-	test -n "${RESOLV_CONF}" && cp -v "${RESOLV_CONF}" "${JAILMNT}/etc/"
-	msg "Starting jail ${JAILNAME}"
-	jrun 0
-	# Only set STATUS=1 if not turned off
-	# jail -s should not do this or jail will stop on EXIT
-	[ ${SET_STATUS_ON_START-1} -eq 1 ] && export STATUS=1
-}
-
-jail_stop() {
-	[ $# -ne 0 ] && eargs
-	local mnt
-	jail_runs || err 1 "No such jail running: ${JAILNAME%-job-*}"
-	zset status "stop:"
-
-	jail -r ${JAILNAME%-job-*} >/dev/null
-	# Shutdown all builders
-	if [ ${PARALLEL_JOBS} -ne 0 ]; then
-		# - here to only check for unset, {start,stop}_builders will set this to blank if already stopped
-		for j in ${JOBS-$(jot -w %02d ${PARALLEL_JOBS})}; do
-			jail -r ${JAILNAME%-job-*}-job-${j} >/dev/null 2>&1 || :
-		done
-	fi
-	msg "Umounting file systems"
-	mnt=`realpath ${MASTERMNT:-${JAILMNT}}`
-	mount | awk -v mnt="${mnt}/" 'BEGIN{ gsub(/\//, "\\\/", mnt); } { if ($3 ~ mnt && $1 !~ /\/dev\/md/ ) { print $3 }}' |  sort -r | xargs umount -f || :
-
-	if [ -n "${MFSSIZE}" ]; then
-		# umount the ${JAILMNT}/build/$jobno/wrkdirs
-		mount | grep "/dev/md.*${mnt}/build" | while read mntpt; do
-			local dev=`echo $mntpt | awk '{print $1}'`
-			if [ -n "$dev" ]; then
-				umount $dev
-				mdconfig -d -u $dev
-			fi
-		done
-		# umount the $JAILMNT/wrkdirs
-		local dev=`mount | grep "/dev/md.*${mnt}" | awk '{print $1}'`
-		if [ -n "$dev" ]; then
-			umount $dev
-			mdconfig -d -u $dev
-		fi
-	fi
-	zfs rollback -R ${JAILFS%/build/*}@clean
-	zset status "idle:"
-	export STATUS=0
-}
-
-porttree_create_zfs() {
-	[ $# -ne 3 ] && eargs name mountpoint fs
-	local name=$1
-	local mnt=$( echo $2 | sed -e 's,//,/,g')
-	local fs=$3
-	if [ $fs != "none" ]; then
-		msg_n "Creating ${name} fs..."
-		zfs create -p \
-			-o atime=off \
-			-o compression=off \
-			-o mountpoint=${mnt} \
-			-o ${NS}:type=ports \
-			-o ${NS}:name=${name} \
-			${fs} || err 1 " Fail" && echo " done"
-	else
-		mkdir -p ${mnt}
-		echo "${name} __METHOD__ ${mnt}" >> ${POUDRIERED}/portstrees
-	fi
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
-	# Kill all children - this does NOT recurse, so orphans can still
-	# occur. This is just to avoid requiring pid files for parallel_run
-	for pid in $(jobs -p); do
-		kill ${pid} 2>/dev/null || :
-	done
-
-	if [ -d ${MASTERMNT:-${JAILMNT}}/poudriere/var/run ]; then
-		for pid in ${MASTERMNT:-${JAILMNT}}/poudriere/var/run/*.pid; do
-			# Ensure there is a pidfile to read or break
-			[ "${pid}" = "${MASTERMNT:-${JAILMNT}}/poudriere/var/run/*.pid" ] && break
-			pkill -15 -F ${pid} >/dev/null 2>&1 || :
-		done
-	fi
-	wait
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
+	${NULLMOUNT} ${optionsdir} ${JAILMNT}/var/db/ports || err 1 "Failed to mount OPTIONS directory"
 }
 
 sanity_check_pkgs() {
@@ -560,128 +225,6 @@
 	return $ret
 }
 
-# Build+test port and return on first failure
-build_port() {
-	[ $# -ne 1 ] && eargs portdir
-	local portdir=$1
-	local port=${portdir##/usr/ports/}
-	local targets="check-config fetch checksum extract patch configure build run-depends install package ${PORTTESTING:+deinstall}"
-
-	for phase in ${targets}; do
-		zset status "${phase}:${port}"
-		job_msg_verbose "Status for build ${port}: ${phase}"
-		if [ "${phase}" = "fetch" ]; then
-			jail -r ${JAILNAME} >/dev/null
-			jrun 1
-		fi
-		[ "${phase}" = "install" -a $ZVERSION -ge 28 ] && zfs snapshot ${JAILFS}@preinst
-		if [ "${phase}" = "deinstall" ]; then
-			msg "Checking shared library dependencies"
-			if [ ${PKGNG} -eq 0 ]; then
-				PLIST="/var/db/pkg/${PKGNAME}/+CONTENTS"
-				grep -v "^@" ${JAILMNT}${PLIST} | \
-					sed -e "s,^,${PREFIX}/," | \
-					xargs injail ldd 2>&1 | \
-					grep -v "not a dynamic executable" | \
-					awk ' /=>/{ print $3 }' | sort -u
-			else
-				injail pkg query "%Fp" ${PKGNAME} | \
-					xargs injail ldd 2>&1 | \
-					grep -v "not a dynamic executable" | \
-					awk '/=>/ { print $3 }' | sort -u
-			fi
-		fi
-
-		print_phase_header ${phase}
-		injail env ${PKGENV} ${PORT_FLAGS} make -C ${portdir} ${phase} || return 1
-		print_phase_footer
-
-		if [ "${phase}" = "checksum" ]; then
-			jail -r ${JAILNAME} >/dev/null
-			jrun 0
-		fi
-		if [ "${phase}" = "deinstall" ]; then
-			msg "Checking for extra files and directories"
-			PREFIX=`injail make -C ${portdir} -VPREFIX`
-			zset status "leftovers:${port}"
-			if [ $ZVERSION -lt 28 ]; then
-				find ${jailbase}${PREFIX} ! -type d | \
-					sed -e "s,^${jailbase}${PREFIX}/,," | sort
-
-				find ${jailbase}${PREFIX}/ -type d | sed "s,^${jailbase}${PREFIX}/,," | sort > ${jailbase}${PREFIX}.PLIST_DIRS.after
-				comm -13 ${jailbase}${PREFIX}.PLIST_DIRS.before ${jailbase}${PREFIX}.PLIST_DIRS.after | sort -r | awk '{ print "@dirrmtry "$1}'
-			else
-				local portname=$(injail make -C ${portdir} -VPORTNAME)
-				local add=$(mktemp ${jailbase}/tmp/add.XXXXXX)
-				local add1=$(mktemp ${jailbase}/tmp/add1.XXXXXX)
-				local del=$(mktemp ${jailbase}/tmp/del.XXXXXX)
-				local del1=$(mktemp ${jailbase}/tmp/del1.XXXXXX)
-				local mod=$(mktemp ${jailbase}/tmp/mod.XXXXXX)
-				local mod1=$(mktemp ${jailbase}/tmp/mod1.XXXXXX)
-				local die=0
-				zfs diff -FH ${JAILFS}@preinst ${JAILFS} | \
-					while read mod type path; do
-					local ppath
-					ppath=`echo "$path" | sed -e "s,^${JAILMNT},," -e "s,^${PREFIX}/,," -e "s,^share/${portname},%%DATADIR%%," -e "s,^etc/${portname},%%ETCDIR%%,"`
-					case "$ppath" in
-					/var/db/pkg/*) continue;;
-					/var/run/*) continue;;
-					/wrkdirs/*) continue;;
-					/tmp/*) continue;;
-					share/nls/POSIX) continue;;
-					share/nls/en_US.US-ASCII) continue;;
-					/var/db/fontconfig/*) continue;;
-					/var/log/*) continue;;
-					/var/mail/*) continue;;
-					${HOME}/*) continue;;
-					/etc/spwd.db) continue;;
-					/etc/pwd.db) continue;;
-					/etc/group) continue;;
-					/etc/make.conf) continue;;
-					/etc/passwd) continue;;
-					/etc/master.passwd) continue;;
-					/etc/shells) continue;;
-					/etc/make.conf.bak) continue;;
-					esac
-					case $mod$type in
-					+*) echo "${ppath}" >> ${add};;
-					-*) echo "${ppath}" >> ${del};;
-					M/) continue;;
-					M*) echo "${ppath}" >> ${mod};;
-					esac
-				done
-				sort ${add} > ${add1}
-				sort ${del} > ${del1}
-				sort ${mod} > ${mod1}
-				comm -12 ${add1} ${del1} >> ${mod1}
-				comm -23 ${add1} ${del1} > ${add}
-				comm -13 ${add1} ${del1} > ${del}
-				if [ -s "${add}" ]; then
-					msg "Files or directories left over:"
-					die=1
-					cat ${add}
-				fi
-				if [ -s "${del}" ]; then
-					msg "Files or directories removed:"
-					die=1
-					cat ${del}
-				fi
-				if [ -s "${mod}" ]; then
-					msg "Files or directories modified:"
-					die=1
-					cat ${mod1}
-				fi
-				rm -f ${add} ${add1} ${del} ${del1} ${mod} ${mod1}
-				[ $die -eq 0 ] || return 1
-			fi
-		fi
-	done
-	jail -r ${JAILNAME} >/dev/null
-	jrun 0
-	zset status "idle:"
-	zfs destroy -r ${JAILFS}@preinst || :
-	return 0
-}
 
 # Save wrkdir and return path to file
 save_wrkdir() {
@@ -716,58 +259,6 @@
 	fi
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
@@ -792,12 +283,12 @@
     <div id="${type}">
       <h2>${display_name} ports </h2>
       <table>
-        <tr>
-          <th>Port</th>
-          <th>Origin</th>
+	<tr>
+	  <th>Port</th>
+	  <th>Origin</th>
 	  ${status_head}
 	  ${reason_head}
-        </tr>
+	</tr>
 EOF
 	cnt=0
 	while read port extra; do
@@ -818,16 +309,22 @@
 		fi
 
 		cat >> ${html_path} << EOF
-        <tr>
-          <td id="tr_pkg_${pkgname}">${pkgname}</td>
-          <td><a href="http://portsmon.freebsd.org/portoverview.py?category=${port_category}&amp;portname=${port_name}">${port}</a></td>
+	<tr>
+	  <td id="tr_pkg_${pkgname}">${pkgname}</td>
+	  <td><a href="http://portsmon.freebsd.org/portoverview.py?category=${port_category}&amp;portname=${port_name}">${port}</a></td>
 	  ${status_col}
 	  ${reason_col}
-        </tr>
+	</tr>
 EOF
 		cnt=$(( cnt + 1 ))
 	done <  ${JAILMNT}/poudriere/ports.${type}
-	zset stats_${type} $cnt
+
+	if [ "${type}" = "skipped" ]; then
+	  # Skipped lists the skipped origin for every dependency that wanted it
+	  zset stats_skipped $(awk '{print $1}' ${JAILMNT}/poudriere/ports.skipped | sort -u | wc -l)
+	else
+	  zset stats_${type} $cnt
+	fi
 
 cat >> ${html_path} << EOF
       </table>
@@ -916,74 +413,6 @@
 	[ "${html_path}" = "/dev/null" ] || mv ${html_path} ${html_path%.tmp}
 }
 
-build_queue() {
-
-	local j cnt mnt fs name pkgname read_queue builders_active should_build_stats
-
-	read_queue=1
-	should_build_stats=1 # Always build stats on first pass
-	while :; do
-		builders_active=0
-		for j in ${JOBS}; do
-			mnt="${JAILMNT}/build/${j}"
-			fs="${JAILFS}/build/${j}"
-			name="${JAILNAME}-job-${j}"
-			if [ -f  "${JAILMNT}/poudriere/var/run/${j}.pid" ]; then
-				if pgrep -F "${JAILMNT}/poudriere/var/run/${j}.pid" >/dev/null 2>&1; then
-					builders_active=1
-					continue
-				fi
-				should_build_stats=1
-				rm -f "${JAILMNT}/poudriere/var/run/${j}.pid"
-				JAILFS="${fs}" zset status "idle:"
-
-				# A builder finished, check the queue to see if
-				# it can do some work
-				read_queue=1
-			fi
-
-			# Don't want to read the queue, so just skip this
-			# builder and check the next, as it may be done
-			[ ${read_queue} -eq 0 ] && continue
-
-			pkgname=$(next_in_queue)
-			if [ -z "${pkgname}" ]; then
-				# pool empty ?
-				[ -n "$(dir_empty ${JAILMNT}/poudriere/pool)" ] && return
-
-				# Pool is waiting on dep, wait until a build
-				# is done before checking the queue again
-				read_queue=0
-			else
-				MASTERMNT=${JAILMNT} JAILNAME="${name}" JAILMNT="${mnt}" JAILFS="${fs}" \
-					MY_JOBID="${j}" \
-					build_pkg "${pkgname}" >/dev/null 2>&1 &
-				echo "$!" > ${JAILMNT}/poudriere/var/run/${j}.pid
-
-				# A new job is spawned, try to read the queue
-				# just to keep things moving
-				read_queue=1
-				builders_active=1
-			fi
-		done
-		if [ ${read_queue} -eq 0 ]; then
-			# If not wanting to read the queue, sleep to save CPU
-			sleep 1
-		fi
-
-		if [ ${builders_active} -eq 0 ]; then
-			msg "Dependency loop or poudriere bug detected."
-			find ${JAILMNT}/poudriere/pool || echo "pool missing"
-			find ${JAILMNT}/poudriere/deps || echo "deps missing"
-			err 1 "Queue is unprocessable"
-		fi
-
-		if [ ${should_build_stats} -eq 1 ]; then
-			build_stats
-			should_build_stats=0
-		fi
-	done
-}
 
 # Build ports in parallel
 # Returns when all are built.
@@ -1066,11 +495,11 @@
 
 	PKGNAME="${pkgname}" # set ASAP so cleanup() can use it
 	port=$(cache_get_origin ${pkgname})
-	portdir="/usr/ports/${port}"
+	portdir="${PORTSRC}/${port}"
 
 	job_msg "Starting build of ${port}"
 	zset status "starting:${port}"
-	zfs rollback -r ${JAILFS}@prepkg || err 1 "Unable to rollback ${JAILFS}"
+	reset_slave ${MASTERMNT} ${JAILMNT}
 
 	# If this port is IGNORED, skip it
 	# This is checked here instead of when building the queue
@@ -1119,10 +548,12 @@
 			job_msg "Finished build of ${port}: Success"
 			# Cache information for next run
 			pkg_cache_data "${PKGDIR}/All/${PKGNAME}.${PKG_EXT}" ${port} || :
+			firehook port_build_success "${JAILNAME}" "${PTNAME}" "${JAILMNT}/${portdir}"
 		else
 			echo "${port} ${failed_phase}" >> "${MASTERMNT:-${JAILMNT}}/poudriere/ports.failed"
 			job_msg "Finished build of ${port}: Failed: ${failed_phase}"
 			clean_rdepends=1
+			firehook port_build_failure "${JAILNAME}" "${PTNAME}" "${JAILMNT}/${portdir}" "${failed_phase}"
 		fi
 	fi
 
@@ -1137,10 +568,10 @@
 	[ $# -ne 1 ] && eargs directory
 	local dir=$1
 	local makeargs="-VPKG_DEPENDS -VBUILD_DEPENDS -VEXTRACT_DEPENDS -VLIB_DEPENDS -VPATCH_DEPENDS -VFETCH_DEPENDS -VRUN_DEPENDS"
-	[ -d "${PORTSDIR}/${dir}" ] && dir="/usr/ports/${dir}"
+	[ -d "${PORTSDIR}/${dir}" ] && dir="${PORTSRC}/${dir}"
 
 	injail make -C ${dir} $makeargs | tr '\n' ' ' | \
-		sed -e "s,[[:graph:]]*/usr/ports/,,g" -e "s,:[[:graph:]]*,,g" | sort -u
+		sed -e "s,[[:graph:]]*${PORTSRC}/,,g" -e "s,:[[:graph:]]*,,g" | sort -u
 }
 
 deps_file() {
@@ -1150,7 +581,7 @@
 
 	if [ ! -f "${depfile}" ]; then
 		if [ "${PKG_EXT}" = "tbz" ]; then
-			injail pkg_info -qr "/usr/ports/packages/All/${pkg##*/}" | awk '{ print $2 }' > "${depfile}"
+			injail pkg_info -qr "${STD_PACKAGES}/All/${pkg##*/}" | awk '{ print $2 }' > "${depfile}"
 		else
 			pkg info -qdF "${pkg}" > "${depfile}"
 		fi
@@ -1168,7 +599,7 @@
 	if [ ! -f "${originfile}" ]; then
 		if [ -z "${origin}" ]; then
 			if [ "${PKG_EXT}" = "tbz" ]; then
-				origin=$(injail pkg_info -qo "/usr/ports/packages/All/${pkg##*/}")
+				origin=$(injail pkg_info -qo "${STD_PACKAGES}/All/${pkg##*/}")
 			else
 				origin=$(pkg query -F "${pkg}" "%o")
 			fi
@@ -1188,7 +619,7 @@
 
 	if [ ! -f "${optionsfile}" ]; then
 		if [ "${PKG_EXT}" = "tbz" ]; then
-			compiled_options=$(injail pkg_info -qf "/usr/ports/packages/All/${pkg##*/}" | awk -F: '$1 == "@comment OPTIONS" {print $2}' | tr ' ' '\n' | sed -n 's/^\+\(.*\)/\1/p' | sort | tr '\n' ' ')
+			compiled_options=$(injail pkg_info -qf "${STD_PACKAGES}/All/${pkg##*/}" | awk -F: '$1 == "@comment OPTIONS" {print $2}' | tr ' ' '\n' | sed -n 's/^\+\(.*\)/\1/p' | sort | tr '\n' ' ')
 		else
 			compiled_options=$(pkg query -F "${pkg}" '%Ov %Ok' | awk '$1 == "on" {print $2}' | sort | tr '\n' ' ')
 		fi
@@ -1284,7 +715,7 @@
 	o=$(pkg_get_origin ${pkg})
 	v=${pkg##*-}
 	v=${v%.*}
-	if [ ! -d "${JAILMNT}/usr/ports/${o}" ]; then
+	if [ ! -d "${JAILMNT}/${PORTSRC}/${o}" ]; then
 		msg "${o} does not exist anymore. Deleting stale ${pkg##*/}"
 		delete_pkg ${pkg}
 		return 0
@@ -1299,7 +730,7 @@
 
 	# Check if the compiled options match the current options from make.conf and /var/db/options
 	if [ "${CHECK_CHANGED_OPTIONS:-no}" != "no" ]; then
-		current_options=$(injail make -C /usr/ports/${o} pretty-print-config | tr ' ' '\n' | sed -n 's/^\+\(.*\)/\1/p' | sort | tr '\n' ' ')
+			current_options=$(injail make -C ${PORTSRC}/${o} pretty-print-config | tr ' ' '\n' | sed -n 's/^\+\(.*\)/\1/p' | sort | tr '\n' ' ')
 		compiled_options=$(pkg_get_options ${pkg})
 
 		if [ "${compiled_options}" != "${current_options}" ]; then
@@ -1365,7 +796,7 @@
 
 	# Add to cache if not found.
 	if [ -z "${pkgname}" ]; then
-		pkgname=$(injail make -C /usr/ports/${origin} -VPKGNAME)
+		pkgname=$(injail make -C ${PORTSRC}/${origin} -VPKGNAME)
 		# Make sure this origin did not already exist
 		existing_origin=$(cache_get_origin "${pkgname}" 2>/dev/null || :)
 		# It may already exist due to race conditions, it is not harmful. Just ignore.
@@ -1417,24 +848,6 @@
 	done
 }
 
-listed_ports() {
-	if [ ${ALL:-0} -eq 1 ]; then
-		PORTSDIR=`porttree_get_base ${PTNAME}`
-		[ -d "${PORTSDIR}/ports" ] && PORTSDIR="${PORTSDIR}/ports"
-		for cat in $(awk '$1 == "SUBDIR" { print $3}' ${PORTSDIR}/Makefile); do
-			awk -v cat=${cat}  '$1 == "SUBDIR" { print cat"/"$3}' ${PORTSDIR}/${cat}/Makefile
-		done
-		return
-	fi
-	if [ -z "${LISTPORTS}" ]; then
-		if [ -n "${LISTPKGS}" ]; then
-			grep -v -E '(^[[:space:]]*#|^[[:space:]]*$)' ${LISTPKGS}
-		fi
-	else
-		echo ${LISTPORTS} | tr ' ' '\n'
-	fi
-}
-
 parallel_stop() {
 	wait
 }
@@ -1508,11 +921,34 @@
 	mkdir -p "${JAILMNT}/poudriere/pool" \
 		"${JAILMNT}/poudriere/deps" \
 		"${JAILMNT}/poudriere/rdeps" \
+		"${JAILMNT}/poudriere/trees" \
 		"${JAILMNT}/poudriere/var/run" \
 		"${JAILMNT}/poudriere/var/cache" \
 		"${JAILMNT}/poudriere/var/cache/origin-pkgname" \
 		"${JAILMNT}/poudriere/var/cache/pkgname-origin"
 
+		cat > ${JAILMNT}/poudriere/trees/mtree.exclude << EOF
+./etc/group
+./etc/make.conf
+./etc/make.conf.bak
+./etc/master.passwd
+./etc/passwd
+./etc/pwd.db
+./etc/shells
+./etc/spwd.db
+./tmp/*
+./usr/local/lib/charset.alias
+./usr/local/share/nls/POSIX
+./usr/local/share/nls/en_US.US-ASCII
+./var/db/fontconfig/*
+./var/db/pkg/*
+./var/log/*
+./var/mail/*
+./var/run/*
+./wrkdirs/*
+.${HOME}/*
+EOF
+
 	zset stats_queued "0"
 	:> ${JAILMNT}/poudriere/ports.built
 	:> ${JAILMNT}/poudriere/ports.failed
@@ -1596,8 +1032,7 @@
 	export FORCE_PACKAGE=yes
 	export USER=root
 	export HOME=/root
-	PORTSDIR=`porttree_get_base ${PTNAME}`
-	[ -d "${PORTSDIR}/ports" ] && PORTSDIR="${PORTSDIR}/ports"
+	PORTSDIR=$(get_portsdir ${PTNAME})
 	[ -z "${JAILMNT}" ] && err 1 "No path of the base of the jail defined"
 	[ -z "${PORTSDIR}" ] && err 1 "No ports directory defined"
 	[ -z "${PKGDIR}" ] && err 1 "No package directory defined"
@@ -1620,9 +1055,9 @@
 
 	msg "Populating LOCALBASE"
 	mkdir -p ${JAILMNT}/${MYBASE:-/usr/local}
-	injail /usr/sbin/mtree -q -U -f /usr/ports/Templates/BSD.local.dist -d -e -p ${MYBASE:-/usr/local} >/dev/null
+	injail /usr/sbin/mtree -q -U -f ${PORTSRC}/Templates/BSD.local.dist -d -e -p ${MYBASE:-/usr/local} >/dev/null
 
-	WITH_PKGNG=$(injail make -f /usr/ports/Mk/bsd.port.mk -V WITH_PKGNG)
+	WITH_PKGNG=$(injail make -f ${PORTSRC}/Mk/bsd.port.mk -V WITH_PKGNG)
 	if [ -n "${WITH_PKGNG}" ]; then
 		export PKGNG=1
 		export PKG_EXT="txz"
@@ -1645,26 +1080,40 @@
 . ${SCRIPTPREFIX}/../../etc/poudriere.conf
 POUDRIERED=${SCRIPTPREFIX}/../../etc/poudriere.d
 
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
@@ -1679,8 +1128,3 @@
 	*) err 1 "invalid format for WRKDIR_ARCHIVE_FORMAT: ${WRKDIR_ARCHIVE_FORMAT}" ;;
 esac
 
-case ${PARALLEL_JOBS} in
-''|*[!0-9]*)
-	PARALLEL_JOBS=$(sysctl -n hw.ncpu)
-	;;
-esac
