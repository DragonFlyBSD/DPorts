# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: ports/x11/sbxkb/Makefile,v 1.2 2013/01/27 13:14:07 svnexp Exp $

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

post-patch:
# Remove debug flag (-g) from CFLAGS
	@${REINPLACE_CMD} -e 's,-g$$,,' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
