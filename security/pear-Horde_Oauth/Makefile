# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: security/pear-Horde_Oauth/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Horde_Oauth
PORTVERSION=	1.0.2
CATEGORIES=	security www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde OAuth client/server

USE_HORDE_RUN=	Horde_Exception Horde_Http
USE_PHP=	hash openssl

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
