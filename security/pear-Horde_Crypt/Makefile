# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: security/pear-Horde_Crypt/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Horde_Crypt
PORTVERSION=	2.4.0
CATEGORIES=	security www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Cryptography API

OPTIONS_DEFINE=	BCMATH
BCMATH_DESC=	Depend on bcmath PHP extension

USE_HORDE_RUN=	Horde_Exception \
		Horde_Mime \
		Horde_Stream_Filter \
		Horde_Translation \
		Horde_Util
USE_PHP=	hash openssl

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MBCMATH}
USE_PHP+=	bcmath
.endif

.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
