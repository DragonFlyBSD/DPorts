# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: security/pear-Horde_Perms/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	Horde_Perms
PORTVERSION=	2.1.1
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
