# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: net/pear-Horde_Kolab_Session/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Horde_Kolab_Session
PORTVERSION=	2.0.1
CATEGORIES=	net www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde library for managing an active Kolab session

USE_HORDE_RUN=	Horde_Exception

# Optional but we want it
USE_HORDE_RUN+=	Horde_Kolab_Server \
		Horde_Log

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
