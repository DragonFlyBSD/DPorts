# Created by: Dave Grochowski
# $FreeBSD: x11/xorg-cf-files/Makefile 328711 2013-09-29 17:01:41Z zeising $

PORTNAME=	xorg-cf-files
PORTVERSION=	1.0.5
PORTREVISION=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.org cf files for use with imake builds

LICENSE=	MIT

XORG_CAT=	util

post-patch:
		@${REINPLACE_CMD} 's|\(define ExtraXaw[^ ]*\) [$$].*|\1 /**/|' \
			${WRKSRC}/X11.tmpl

.include <bsd.port.mk>
