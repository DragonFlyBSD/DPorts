# Created by: Gerrit Beine (<tux@pinguru.net>)
# $FreeBSD: graphics/pear-Image_Color/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Image_Color
PORTVERSION=	1.0.4
CATEGORIES=	graphics www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR::Image_Color manages and handles color data and conversions

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PHP=	gd
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
