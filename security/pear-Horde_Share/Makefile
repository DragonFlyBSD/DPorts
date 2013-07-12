# $FreeBSD: security/pear-Horde_Share/Makefile 322568 2013-07-09 17:18:06Z mm $

PORTNAME=	Horde_Share
PORTVERSION=	2.0.4
CATEGORIES=	security www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Shared Permissions System

USE_HORDE_RUN=	Horde_Db \
		Horde_Exception \
		Horde_Group \
		Horde_Perms \
		Horde_Support \
		Horde_Translation \
		Horde_Url \
		Horde_Util

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
