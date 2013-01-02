# Ports collection makefile for:  pear-Horde_Cache
# Date created:			  6 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-Horde_Cache/Makefile,v 1.6 2012/12/12 15:19:47 svnexp Exp $

PORTNAME=	Horde_Cache
PORTVERSION=	2.0.1
CATEGORIES=	devel www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Caching API

OPTIONS_DEFINE=	APC MEMCACHE
APC_DESC=	Require APC PHP extension
MEMCACHE_DESC=	Enable Memcache support
		
USE_HORDE_RUN=	Horde_Exception Horde_Util
USE_PHP=	hash

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MAPC}
USE_PHP+=	apc
.endif

.if ${PORT_OPTIONS:MMEMCACHE}
USE_HORDE_RUN+=	Horde_Memcache
.endif

.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
