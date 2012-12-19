# Ports collection makefile for:  pear-Image_Barcode2
# Date created:			  16 Apr 2012
# Whom:				  Muhammad Moinur Rahman <5u623l20@gmail.com>
#
# $FreeBSD: ports/graphics/pear-Image_Barcode2/Makefile,v 1.2 2012/11/17 05:58:18 svnexp Exp $
#

PORTNAME=	Image_Barcode2
PORTVERSION=	0.2.1
CATEGORIES=	graphics www pear

MAINTAINER=	5u623l20@gmail.com
COMMENT=	PEAR class for barcode generation

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	gd

LATEST_LINK=	pear-${PORTNAME}

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
