# Ports collection makefile for:  pear-Horde_Prefs
# Date created:			  7 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-Horde_Prefs/Makefile,v 1.10 2012/12/12 15:19:48 svnexp Exp $

PORTNAME=	Horde_Prefs
PORTVERSION=	2.0.1
CATEGORIES=	devel www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Preferences API

USE_HORDE_RUN=	Horde_Exception \
		Horde_Mail \
		Horde_Mime \
		Horde_Translation \
		Horde_Util
USE_PHP=	json

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
