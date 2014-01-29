# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: www/pear-Horde_Service_Weather/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Horde_Service_Weather
PORTVERSION=	2.0.1
CATEGORIES=	www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Weather Provider

USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		Horde_Date \
		Horde_Exception \
		Horde_Http \
		Horde_Url

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
