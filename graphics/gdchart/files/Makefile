# $FreeBSD: ports/graphics/gdchart/files/Makefile,v 1.4 2012/11/17 05:58:06 svnexp Exp $

LIB=		gdc
CFLAGS+=	-I${LOCALBASE}/include
LDADD=		-L${LOCALBASE}/lib \
		-lgd \
		-ljpeg \
		-lfreetype
SRCS=		array_alloc.c \
		gdc.c \
		gdc_pie.c \
		gdchart.c \
		price_conv.c
INCS=		gdc.h \
		gdchart.h \
		gdcpie.h
NO_MAN=		YES
PREFIX?=	/usr/local
LOCALBASE?=	/usr/local
LIBDIR=		${PREFIX}/lib
INCSDIR=	${PREFIX}/include
INCDIR=		${INCSDIR}		# for pre-bsd.incs.mk API
SHLIB_MAJOR=	1

.include <bsd.lib.mk>
