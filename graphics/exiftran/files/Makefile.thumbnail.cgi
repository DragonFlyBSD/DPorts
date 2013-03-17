# $FreeBSD: graphics/exiftran/files/Makefile.thumbnail.cgi 300896 2012-07-14 13:54:48Z beat $

PROG=	thumbnail.cgi

.PATH: ${.CURDIR}/../..
SRCS+=	thumbnail.cgi.c

CFLAGS+= -I${PREFIX}/include -DHAVE_NEW_EXIF
LDADD=	-L${PREFIX}/lib -lexif

MAN=

.include <bsd.prog.mk>
