# $FreeBSD: ports/graphics/exiftran/files/Makefile.thumbnail.cgi,v 1.2 2012/11/17 05:58:05 svnexp Exp $

PROG=	thumbnail.cgi

.PATH: ${.CURDIR}/../..
SRCS+=	thumbnail.cgi.c

CFLAGS+= -I${PREFIX}/include -DHAVE_NEW_EXIF
LDADD=	-L${PREFIX}/lib -lexif

MAN=

.include <bsd.prog.mk>
