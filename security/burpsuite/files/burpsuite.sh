#!/bin/sh
#
# $FreeBSD: ports/security/burpsuite/files/burpsuite.sh,v 1.3 2012/11/17 06:01:01 svnexp Exp $
#

cd %%PATH%%
exec %%JAVA_CMD%% -jar -Xmx512m %%BURP%% "$@"
