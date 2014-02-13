#!/bin/sh
#
# $FreeBSD: head/security/webscarab/files/webscarab.sh 340872 2014-01-24 00:14:07Z mat $
#

TEST=`/usr/bin/basename $0`
OPTIONS="-DWebScarab.lite=false"

if [ "${TEST}" = "webscarab_lite" ]; then
	OPTIONS=""
fi


cd %%PATH%%
exec %%JAVA_CMD%% ${OPTIONS} -jar -Xmx256m %%WEBSCARAB%% "$@"
