# $FreeBSD: ports/devel/mingw32-bin-msvcrt/files/Makefile,v 1.5 2012/11/17 05:56:00 svnexp Exp $

all:

install:
	mkdir -p ${PREFIX}/bin
.if defined(INSTALL_AS_USER)
	install -c -m 0755 bin/mingwm10.dll ${PREFIX}/bin
.else
	install -c -g wheel -o root -m 0755 bin/mingwm10.dll ${PREFIX}/bin
.endif	
	mkdir -p ${PREFIX}/mingw32
	cp -R lib include ${PREFIX}/mingw32

