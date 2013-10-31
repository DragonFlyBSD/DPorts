# $FreeBSD: devel/pear-Horde_Prefs/Makefile 332016 2013-10-29 21:46:58Z mm $

PORTNAME=	Horde_Prefs
PORTVERSION=	2.5.1
CATEGORIES=	devel www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Preferences API

USE_HORDE_RUN=	Horde_Exception \
		Horde_Mail \
		Horde_Mime \
		Horde_Translation \
		Horde_Util
USE_PHP=	json

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
