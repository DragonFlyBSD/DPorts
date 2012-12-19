# Ports collection makefile for:  pear-Net_GeoIP
# Date created:			  2007/04/31
# Whom:				  Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/net/pear-Net_GeoIP/Makefile,v 1.4 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Net_GeoIP
PORTVERSION=	1.0.0.r1
CATEGORIES=	net pear
DISTNAME=	Net_GeoIP-1.0.0RC1

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Library to perform geo-location lookups of IP addresses

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/Cache.php:${PORTSDIR}/sysutils/pear-Cache \
		${PEARDIR}/XML/Serializer.php:${PORTSDIR}/devel/pear-XML_Serializer
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Net
FILES=		GeoIP.php GeoIP/DMA.php GeoIP/Location.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
