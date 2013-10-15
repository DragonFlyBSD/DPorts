# Created by: Gerrit Beine (<tux@pinguru.net>)
# $FreeBSD: graphics/pear-Image_Color/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	Image_Color
PORTVERSION=	1.0.4
CATEGORIES=	graphics www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR::Image_Color manages and handles color data and conversions

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PHP=	gd
PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
