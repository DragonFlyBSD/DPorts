# Created by: James Earl
# $FreeBSD: games/gweled/Makefile 326151 2013-09-03 14:08:55Z bapt $

PORTNAME=	gweled
PORTVERSION=	0.7
PORTREVISION=	12
CATEGORIES=	games gnome
MASTER_SITES=	http://sebdelestaing.free.fr/gweled/Release/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	GNOME version of the game called "Bejeweled" or "Diamond Mine"

LIB_DEPENDS=	mikmod.2:${PORTSDIR}/audio/libmikmod

USES=		gmake pkgconfig
USE_GNOME=	gnomeprefix gnomehack gnomehier libgnomeui librsvg2
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|/var/games|${PREFIX}/share/games|' \
		${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|$${MKDIRPROG-mkdir}|mkdir -p|' \
		${WRKSRC}/install-sh

.include <bsd.port.mk>
