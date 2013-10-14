# $FreeBSD: security/pear-Horde_Auth/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Horde_Auth
PORTVERSION=	2.1.0
CATEGORIES=	security www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Authentication API

USE_HORDE_RUN=	Horde_Exception Horde_Util
USE_PHP=	hash

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
