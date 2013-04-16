#!/bin/sh
#
# $FreeBSD: security/dirbuster/files/dirbuster.sh 300897 2012-07-14 14:29:18Z beat $
#

cd %%PATH%%
exec %%JAVA_CMD%% -jar -Xmx256m %%DIRBUSTER%% "$@"
