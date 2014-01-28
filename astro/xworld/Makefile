# Created by: Kris Kennaway <kris@FreeBSD.org
# $FreeBSD: astro/xworld/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xworld
PORTVERSION=	2.0
PORTREVISION=	2
CATEGORIES=	astro geography
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	naddy

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Earth as seen from the direction of the sun

USE_XORG=	x11

HAS_CONFIGURE=	yes
CONFIGURE_ENV=	CAT=${CAT} \
		STRIP=/usr/bin/strip \
		INCLUDES="-I${LOCALBASE}/include" \
		LDLIBS="-lm -L${LOCALBASE}/lib -lX11" \
		MORELIBS=""
PLIST_FILES=	bin/xworld
STRIP=		#don't strip out image data on install

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xworld ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
