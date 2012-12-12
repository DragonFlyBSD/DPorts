# $FreeBSD: ports/games/quake2-ctf/files/Makefile,v 1.3 2012/11/17 05:57:50 svnexp Exp $

SHLIB_NAME=	game.so

SRCS!=		ls *.c

CFLAGS+=	-Dstricmp=strcasecmp -ffast-math -funroll-loops \
		-fomit-frame-pointer -fexpensive-optimizations

LDFLAGS+=	-L/lib -L/usr/lib -lm

.include <bsd.lib.mk>
