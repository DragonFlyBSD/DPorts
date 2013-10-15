# $FreeBSD: graphics/pear-Horde_Image/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	Horde_Image
PORTVERSION=	2.0.5
CATEGORIES=	graphics www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Image API

USE_HORDE_RUN=	Horde_Exception \
		Horde_Support \
		Horde_Translation \
		Horde_Util

OPTIONS_DEFINE=	GD
GD_DESC=	Depend on PHP gd extension

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MGD}
USE_PHP+=	gd
.endif

.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
