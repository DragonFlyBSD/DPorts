# Created by: ijliao
# $FreeBSD: astro/libnova/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	libnova
PORTVERSION=	0.15.0
CATEGORIES=	astro
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/v%20${PORTVERSION}

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Astronomical Calculation Library

USE_AUTOTOOLS=	libtool
USE_GNOME=	lthack
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

post-patch:
	@${REINPLACE_CMD} -e 's|^CFLAGS=|#CFLAGS=|g' ${WRKSRC}/configure

.include <bsd.port.mk>
