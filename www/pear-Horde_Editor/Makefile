# Ports collection makefile for:  pear-Horde_Editor
# Date created:			  7 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/www/pear-Horde_Editor/Makefile,v 1.7 2013/02/12 17:39:04 svnexp Exp $

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
