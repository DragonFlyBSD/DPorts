# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: security/pear-Horde_Perms/Makefile 334186 2013-11-18 13:12:01Z mm $

PORTNAME=	Horde_Perms
PORTVERSION=	2.1.2
CATEGORIES=	security www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Permissions System

USE_HORDE_RUN=	Horde_Db \
		Horde_Exception \
		Horde_Group \
		Horde_Util \
		Horde_Translation

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
