# $FreeBSD: graphics/gdchart/files/Makefile 340722 2014-01-22 17:00:46Z mat $

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
