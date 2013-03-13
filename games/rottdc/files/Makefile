# Makefile wrapper for building both full and shareware versions.
#
# $FreeBSD: ports/games/rottdc/files/Makefile,v 1.2 2012/11/17 05:57:51 svnexp Exp $
#

all: rott rott-sw
	$(MAKE) -C rott
	$(MAKE) -C rott-sw

rott-sw:
	cp -r rott rott-sw
	sed -i '' -Ee 's|(SHAREWARE) *0|\1 1|' rott-sw/develop.h
	sed -i '' -Ee 's|(SUPERROTT) *1|\1 1|' rott/develop.h
