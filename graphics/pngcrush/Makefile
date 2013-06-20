# Created by: Chris D. Faulhaber <jedgar@FreeBSD.org>
# $FreeBSD: graphics/pngcrush/Makefile 320275 2013-06-08 17:18:33Z mandree $

PORTNAME=	pngcrush
PORTVERSION=	1.7.59
CATEGORIES=	graphics
MASTER_SITES=	SF/pmt/${PORTNAME}/old-versions/1.7/${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-nolib

MAINTAINER=	jsa@FreeBSD.org
COMMENT=	Optimizer for PNG files

LIB_DEPENDS=	png15:${PORTSDIR}/graphics/png

USE_XZ=		yes
CFLAGS+=	-DPNGCRUSH_COUNT_COLORS -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
MAKE_ARGS+=	CC="${CC}" CFLAGS="${CFLAGS}" LD="${CC}" LDFLAGS="${LDFLAGS}"
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/pngcrush

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pngcrush ${PREFIX}/bin/pngcrush

.include <bsd.port.mk>
