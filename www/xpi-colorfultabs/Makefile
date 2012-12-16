# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: ports/www/xpi-colorfultabs/Makefile,v 1.40 2012/11/17 23:33:25 svnexp Exp $

PORTNAME=	colorfultabs
PORTVERSION=	16.4
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
