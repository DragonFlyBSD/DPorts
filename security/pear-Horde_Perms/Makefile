# Ports collection makefile for:  pear-Horde_Perms
# Date created:			  7 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/security/pear-Horde_Perms/Makefile,v 1.11 2013/01/10 10:41:48 svnexp Exp $

PORTNAME=	Horde_Perms
PORTVERSION=	2.0.2
CATEGORIES=	security www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Permissions System

USE_HORDE_RUN=	Horde_Db \
		Horde_Exception \
		Horde_Group \
		Horde_Util \
		Horde_Translation

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
