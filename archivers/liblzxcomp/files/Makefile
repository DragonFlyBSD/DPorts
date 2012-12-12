# $FreeBSD: ports/archivers/liblzxcomp/files/Makefile,v 1.3 2012/11/17 05:54:21 svnexp Exp $

LIB = 	lzxcomp
SRCS=	lz_nonslide.c lzx_layer.c
INCS=	lzx_compress.h lzx_constants.h

COPTS= -DLZ_ONEBUFFER -DLAZY -DNONSLIDE
LDADD= -lm

SHLIB_MAJOR=	%%SHLIB_MAJOR%%

LIBDIR=		${PREFIX}/lib
INCLUDEDIR=	${PREFIX}/include

MAN3=	lzxcomp.3
MANDIR=	${PREFIX}/man/man

.include <bsd.lib.mk>
