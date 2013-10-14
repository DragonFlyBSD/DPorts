# $FreeBSD: devel/mingw32-bin-msvcrt/files/Makefile 300896 2012-07-14 13:54:48Z beat $

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

