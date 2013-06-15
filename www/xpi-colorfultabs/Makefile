# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: www/xpi-colorfultabs/Makefile 320616 2013-06-11 16:52:13Z miwi $

PORTNAME=	colorfultabs
PORTVERSION=	18.6
DISTVERSIONSUFFIX=	-fx+sm
PORTEPOCH=	1
CATEGORIES=	www

MAINTAINER=	gecko@FreeBSD.org
COMMENT=	Colors every tab in a different color

XPI_ID=		{0545b830-f0aa-4d7e-8820-50a4629a56fe}
XPI_NUM=	1368

xpi-post-extract:
	@${FIND} ${WRKSRC} -name .DS_Store -delete

.include "${.CURDIR}/../xpi-adblock/Makefile.xpi"
.include <bsd.port.mk>
