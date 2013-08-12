# Created by: vanilla
# $FreeBSD: lang/ofc/Makefile 323810 2013-07-28 04:20:32Z vanilla $

PORTNAME=	ofc
PORTVERSION=	0.8.1
PORTREVISION=	6
CATEGORIES=	lang
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	The Objective-C Foundation Classes library

LIB_DEPENDS=	expat:${PORTSDIR}/textproc/expat2 \
		png15:${PORTSDIR}/graphics/png \
		jpeg:${PORTSDIR}/graphics/jpeg \
		freetype:${PORTSDIR}/print/freetype2

PROJECTHOST=	${PORTNAME}
USE_SDL=	sdl
USE_AUTOTOOLS=	libtool
USES=		pathfix
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include -I${LOCALBASE}/include/libpng15 ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

OPTIONS_DEFINE=	GDBM GMP

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MGDBM}
LIB_DEPENDS+=	gdbm:${PORTSDIR}/databases/gdbm
.endif

.if ${PORT_OPTIONS:MGMP}
LIB_DEPENDS+=	gmp:${PORTSDIR}/math/gmp
.endif

USE_GCC=	4.4

.include <bsd.port.mk>
