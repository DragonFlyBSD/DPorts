# $FreeBSD: net/pear-Horde_Rpc/Makefile 319920 2013-06-04 21:52:57Z mm $

PORTNAME=	Horde_Rpc
PORTVERSION=	2.1.0
CATEGORIES=	net www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde RPC API

USE_HORDE_RUN=	Horde_Core \
		Horde_Dav \
		Horde_Exception \
		Horde_Perms \
		Horde_Serialize \
		Horde_Support \
		Horde_Translation \
		Horde_Util \
		Horde_Xml_Element

# Optional but we want it
USE_HORDE_RUN+=	Horde_ActiveSync \
		Horde_Lock \
		Horde_SyncMl \
		Horde_Http

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
