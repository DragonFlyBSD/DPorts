#!/bin/sh
#
# $FreeBSD: ports/security/dirbuster/files/dirbuster.sh,v 1.2 2012/11/17 06:01:03 svnexp Exp $
#

cd %%PATH%%
exec %%JAVA_CMD%% -jar -Xmx256m %%DIRBUSTER%% "$@"
