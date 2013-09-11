# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: x11/sbxkb/Makefile 326122 2013-09-03 06:36:41Z bapt $

PORTNAME=	sbxkb
PORTVERSION=	0.7.6
CATEGORIES=	x11
MASTER_SITES=	SF/staybox

MAINTAINER=	ports@FreeBSD.org
COMMENT=	XKB keyboard layout indicator and switcher

LICENSE=	GPLv3

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-silent-rules
USE_GNOME=	gtk20
USES=		pkgconfig

post-patch:
# Remove debug flag (-g) from CFLAGS
	@${REINPLACE_CMD} -e 's,-g$$,,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
