# Created by: Matt Peterson <matt@peterson.org>
# $FreeBSD: x11/deskmenu/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	deskmenu
PORTVERSION=	1.3.0
PORTREVISION=	4
CATEGORIES=	x11
MASTER_SITES=	http://matt.peterson.org/FreeBSD/ports/ \
		http://gd.tuwien.ac.at/opsys/linux/gentoo/distfiles/

MAINTAINER=	matt@peterson.org
COMMENT=	X11 application launcher

PLIST_FILES=	bin/deskmenu
USES=		gmake
USE_GNOME=	gtk12
USE_CSTD=	gnu89

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/deskmenu

.include <bsd.port.mk>
