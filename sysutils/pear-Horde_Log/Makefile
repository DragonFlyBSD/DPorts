# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: sysutils/pear-Horde_Log/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Horde_Log
PORTVERSION=	2.1.0
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
