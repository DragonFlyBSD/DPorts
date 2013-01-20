# Ports collection makefile for:  pear-Horde_SyncMl
# Date created:			  6 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/comms/pear-Horde_SyncMl/Makefile,v 1.11 2013/01/10 18:34:35 svnexp Exp $

PORTNAME=	Horde_SyncMl
PORTVERSION=	2.0.2
CATEGORIES=	comms www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde API for processing SyncML requests

USE_HORDE_RUN=	Horde_Date \
		Horde_Icalendar \
		Horde_Log \
		Horde_Support \
		Horde_Util \
		Horde_Xml_Wbxml \
		Horde_Translation \

# optional but we want it
USE_HORDE_RUN+= Horde_Auth \
		Horde_Core

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
