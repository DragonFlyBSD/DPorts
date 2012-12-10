# $FreeBSD: ports/devel/djgpp-crx/files/Makefile,v 1.2 2012/11/17 05:55:41 svnexp Exp $

all: stubify

stubify:
	cc -O src/stub/stubify.c -o stubify

install:
	mkdir -p ${PREFIX}/i586-pc-msdosdjgpp/bin
	install -c -g wheel -o root -m 0755 stubify ${PREFIX}/i586-pc-msdosdjgpp/bin
	cp -R lib include ${PREFIX}/i586-pc-msdosdjgpp

