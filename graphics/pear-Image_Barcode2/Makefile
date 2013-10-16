# Created by: Muhammad Moinur Rahman <5u623l20@gmail.com>
# $FreeBSD: graphics/pear-Image_Barcode2/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	Image_Barcode2
PORTVERSION=	0.2.3
CATEGORIES=	graphics www pear

MAINTAINER=	5u623l20@gmail.com
COMMENT=	PEAR class for barcode generation

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	gd
PEAR_AUTOINSTALL=	yes

LATEST_LINK=	pear-${PORTNAME}

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
