# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: graphics/pear-Image_Transform/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Image_Transform
PORTVERSION=	0.9.5
CATEGORIES=	graphics www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A standard interface to manipulate images using different libraries

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	gd
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
