# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: security/pear-Horde_Secret/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Horde_Secret
PORTVERSION=	2.0.2
CATEGORIES=	security www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Secret Encryption API

USE_HORDE_RUN=	Horde_Crypt_Blowfish \
		Horde_Exception \
		Horde_Support
		
USE_PHP=	hash

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
