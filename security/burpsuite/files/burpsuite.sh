#!/bin/sh
#
# $FreeBSD: security/burpsuite/files/burpsuite.sh 300897 2012-07-14 14:29:18Z beat $
#

cd %%PATH%%
exec %%JAVA_CMD%% -jar -Xmx512m %%BURP%% "$@"
