# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: comms/pear-Horde_SyncMl/Makefile 327714 2013-09-20 16:03:29Z bapt $

PORTNAME=	Horde_SyncMl
PORTVERSION=	2.0.3
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

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
