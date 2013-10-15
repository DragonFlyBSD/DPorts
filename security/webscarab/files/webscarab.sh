#!/bin/sh
#
# $FreeBSD: security/webscarab/files/webscarab.sh 300897 2012-07-14 14:29:18Z beat $
#

TEST=`/usr/bin/basename $0`
OPTIONS="-DWebScarab.lite=false"

if [ "${TEST}" = "webscarab_lite" ]; then
	OPTIONS=""
fi


cd %%PATH%%
exec %%JAVA_CMD%% ${OPTIONS} -jar -Xmx256m %%WEBSCARAB%% "$@"
