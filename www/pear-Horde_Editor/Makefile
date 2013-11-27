# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: www/pear-Horde_Editor/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Horde_Editor
PORTVERSION=	2.0.3
CATEGORIES=	www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Editor API

CONFLICTS=	horde-3*

USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		Horde_Browser \
		Horde_Exception \
		Horde_Serialize

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
