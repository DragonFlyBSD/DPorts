# $FreeBSD: ports/audio/xmms-flac/files/Makefile,v 1.2 2012/11/17 05:54:48 svnexp Exp $

SUBDIRS= src/share src/plugin_common src/plugin_xmms

all install:
	@for d in ${SUBDIRS}; do \
		(cd $$d; ${MAKE} $@); \
	done
