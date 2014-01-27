# $FreeBSD: graphics/exiftran/files/Makefile.thumbnail.cgi 340722 2014-01-22 17:00:46Z mat $

PROG=	thumbnail.cgi

.PATH: ${.CURDIR}/../..
SRCS+=	thumbnail.cgi.c

CFLAGS+= -I${PREFIX}/include -DHAVE_NEW_EXIF
LDADD=	-L${PREFIX}/lib -lexif

MAN=

.include <bsd.prog.mk>
