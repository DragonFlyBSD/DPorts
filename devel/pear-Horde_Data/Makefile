# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: devel/pear-Horde_Data/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Horde_Data
PORTVERSION=	2.0.4
CATEGORIES=	devel www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Data API

USE_HORDE_RUN=	Horde_Browser \
		Horde_Exception \
		Horde_Icalendar \
		Horde_Mail \
		Horde_Mime \
		Horde_Translation \
		Horde_Util

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
