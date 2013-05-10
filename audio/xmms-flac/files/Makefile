# $FreeBSD: audio/xmms-flac/files/Makefile 300895 2012-07-14 12:56:14Z beat $

SUBDIRS= src/share src/plugin_common src/plugin_xmms

all install:
	@for d in ${SUBDIRS}; do \
		(cd $$d; ${MAKE} $@); \
	done
