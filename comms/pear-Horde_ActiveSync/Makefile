# $FreeBSD: comms/pear-Horde_ActiveSync/Makefile 331287 2013-10-22 16:05:29Z mm $

PORTNAME=	Horde_ActiveSync
PORTVERSION=	2.8.5
CATEGORIES=	comms www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde ActiveSync Server Library

USE_HORDE_RUN=	Horde_Date \
		Horde_Exception \
		Horde_Icalendar \
		Horde_Mime \
		Horde_Support \
		Horde_Util

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
