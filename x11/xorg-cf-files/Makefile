# Created by: Dave Grochowski
# $FreeBSD: head/x11/xorg-cf-files/Makefile 425433 2016-11-05 19:10:55Z bapt $

PORTNAME=	xorg-cf-files
PORTVERSION=	1.0.6
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.org cf files for use with imake builds

LICENSE=	MIT

XORG_CAT=	util

post-patch:
		@${REINPLACE_CMD} 's|\(define ExtraXaw[^ ]*\) [$$].*|\1 /**/|' \
			${WRKSRC}/X11.tmpl

.include <bsd.port.mk>
