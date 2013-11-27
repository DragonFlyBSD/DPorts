# $FreeBSD: databases/pear-Horde_HashTable/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Horde_HashTable
PORTVERSION=	1.1.0
CATEGORIES=	databases www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Hash Table Interface

OPTIONS_DEFINE=	MEMCACHE
USE_HORDE_RUN=	Horde_Exception

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MMEMCACHE}
USE_HORDE_RUN+=	Horde_Memcache
.endif

.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
