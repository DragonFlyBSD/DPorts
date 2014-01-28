# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: graphics/pear-Image_3D/Makefile 340722 2014-01-22 17:00:46Z mat $

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

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
