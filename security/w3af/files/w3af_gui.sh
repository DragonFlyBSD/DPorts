#!/bin/sh
#
# $FreeBSD: security/w3af/files/w3af_gui.sh 300897 2012-07-14 14:29:18Z beat $
#

cd %%PATH%%
exec %%PYTHON_CMD%% -O w3af_gui.py
