# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: graphics/pear-Image_3D/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	Image_3D
PORTVERSION=	0.4.2
CATEGORIES=	graphics www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class allows the rendering of 3 dimensional objects

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PHP=	gd

LATEST_LINK=	pear-${PORTNAME}

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
