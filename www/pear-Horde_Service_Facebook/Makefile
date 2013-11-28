# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: www/pear-Horde_Service_Facebook/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Horde_Service_Facebook
PORTVERSION=	2.0.6
CATEGORIES=	www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Facebook client

USE_PHP=	json simplexml
USE_HORDE_RUN=	Horde_Exception \
		Horde_Http \
		Horde_Translation \
		Horde_Support

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
