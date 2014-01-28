# $FreeBSD: games/quake2-ctf/files/Makefile 340722 2014-01-22 17:00:46Z mat $

SHLIB_NAME=	game.so

SRCS!=		ls *.c

CFLAGS+=	-Dstricmp=strcasecmp -ffast-math -funroll-loops \
		-fomit-frame-pointer -fexpensive-optimizations

LDFLAGS+=	-L/lib -L/usr/lib -lm

.include <bsd.lib.mk>
