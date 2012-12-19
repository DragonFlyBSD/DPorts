# Ports collection makefile for:  pear-Image_Color
# Date created:			  01 June 2004
# Whom:				  Gerrit Beine (<tux@pinguru.net>)
#
# $FreeBSD: ports/graphics/pear-Image_Color/Makefile,v 1.9 2012/11/17 05:58:18 svnexp Exp $
#

PORTNAME=	Image_Color
PORTVERSION=	1.0.3
CATEGORIES=	graphics www pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR::Image_Color manages and handles color data and conversions

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PHP=	gd

CATEGORY=	Image
FILES=		Color.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
