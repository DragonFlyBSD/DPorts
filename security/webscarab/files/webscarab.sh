#!/bin/sh
#
# $FreeBSD: ports/security/webscarab/files/webscarab.sh,v 1.2 2012/11/17 06:01:22 svnexp Exp $
#

TEST=`/usr/bin/basename $0`
OPTIONS="-DWebScarab.lite=false"

if [ "${TEST}" = "webscarab_lite" ]; then
	OPTIONS=""
fi


cd %%PATH%%
exec %%JAVA_CMD%% ${OPTIONS} -jar -Xmx256m %%WEBSCARAB%% "$@"
