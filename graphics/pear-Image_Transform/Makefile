# Ports collection makefile for:  pear-Image_Transform
# Date created:			  01 Mai 2007
# Whom:				  Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/graphics/pear-Image_Transform/Makefile,v 1.7 2012/11/17 05:58:18 svnexp Exp $
#

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
