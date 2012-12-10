# New ports collection makefile for:    iec16022
# Date created:                         Thu Jul  3 14:13:08 CEST 2008
# Whom:                                 Emanuel Haupt <ehaupt@FreeBSD.org>
#
# $FreeBSD: ports/graphics/iec16022/Makefile,v 1.8 2012/11/17 05:58:09 svnexp Exp $
#

PORTNAME=	iec16022
PORTVERSION=	0.2.4
CATEGORIES=	graphics
MASTER_SITES=	http://datenfreihafen.org/~stefan/iec16022/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Create 2D barcodes, also known as DataMatrix

LICENSE=	GPLv2

LIB_DEPENDS=	popt:${PORTSDIR}/devel/popt

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_PKGCONFIG=	build

MAKE_JOBS_SAFE=	yes

CFLAGS+=	-I${LOCALBASE}/include -L${LOCALBASE}/lib

MAN1=		iec16022.1

post-patch:
	@${REINPLACE_CMD} -e 's|malloc.h|stdlib.h|' ${WRKSRC}/iec16022.c \
		${WRKSRC}/iec16022ecc200.c ${WRKSRC}/reedsol.c ${WRKSRC}/image.c
	@${REINPLACE_CMD} -e \
		"s|^\(pkgconfigdir\).*|\1 = ${PREFIX}/libdata/pkgconfig|" \
			${WRKSRC}/Makefile.in

.include <bsd.port.mk>
