# $FreeBSD: audio/xmms-flac/files/Makefile 340722 2014-01-22 17:00:46Z mat $

SUBDIRS= src/share src/plugin_common src/plugin_xmms

all install:
	@for d in ${SUBDIRS}; do \
		(cd $$d; ${MAKE} $@); \
	done
