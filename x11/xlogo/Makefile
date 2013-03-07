# $FreeBSD: ports/x11/xlogo/Makefile,v 1.7 2013/02/14 00:09:14 svnexp Exp $

PORTNAME=	xlogo
PORTVERSION=	1.0.4
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Displays the X Window System logo

LICENSE=	MIT

XORG_CAT=	app
USE_XORG=	xrender xft xext xt xaw xp xprintutil

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/xorg-macros.pc:${PORTSDIR}/devel/xorg-macros

MAN1=		xlogo.1

.include <bsd.port.mk>
