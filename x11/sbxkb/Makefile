# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: ports/x11/sbxkb/Makefile,v 1.1 2012/11/17 23:43:27 svnexp Exp $

PORTNAME=	sbxkb
PORTVERSION=	0.7.6
CATEGORIES=	x11
MASTER_SITES=	SF/staybox

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	XKB keyboard layout indicator and switcher

LICENSE=	GPLv3

USE_GNOME=	gtk20

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-silent-rules

post-patch:
	@${REINPLACE_CMD} -e 's,-g$$,,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
