# $FreeBSD: ports/x11-fonts/xfsinfo/Makefile,v 1.5 2013/02/14 12:58:19 svnexp Exp $

PORTNAME=	xfsinfo
PORTVERSION=	1.0.4
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X font server information utility

XORG_CAT=	app
USE_XORG=	x11 libfs

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/xorg-macros.pc:${PORTSDIR}/devel/xorg-macros

PLIST_FILES=	bin/xfsinfo

MAN1=		xfsinfo.1

.include <bsd.port.mk>
