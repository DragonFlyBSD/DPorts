# $FreeBSD: games/quake2-ctf/files/Makefile 300896 2012-07-14 13:54:48Z beat $

SHLIB_NAME=	game.so

SRCS!=		ls *.c

CFLAGS+=	-Dstricmp=strcasecmp -ffast-math -funroll-loops \
		-fomit-frame-pointer -fexpensive-optimizations

LDFLAGS+=	-L/lib -L/usr/lib -lm

.include <bsd.lib.mk>
