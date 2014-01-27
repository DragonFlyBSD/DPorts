# $FreeBSD: devel/pear-Horde_Prefs/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Horde_Prefs
PORTVERSION=	2.5.2
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
