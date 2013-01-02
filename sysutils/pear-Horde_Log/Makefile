# Ports collection makefile for:  pear-Horde_Log
# Date created:			  6 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/pear-Horde_Log/Makefile,v 1.8 2012/12/12 15:19:53 svnexp Exp $

PORTNAME=	Horde_Log
PORTVERSION=	2.0.1
CATEGORIES=	sysutils www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Logging library

OPTIONS_DEFINE=	SCRIBE
SCRIBE_DESC=	Enable scribe support

USE_HORDE_RUN=	Horde_Constraint \
		Horde_Exception

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MSCRIBE}
USE_HORDE+=	Horde_Scribe
.endif

.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
