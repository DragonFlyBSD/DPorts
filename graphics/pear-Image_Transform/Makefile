# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: graphics/pear-Image_Transform/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	Image_Transform
PORTVERSION=	0.9.5
CATEGORIES=	graphics www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A standard interface to manipulate images using different libraries

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	gd
PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
