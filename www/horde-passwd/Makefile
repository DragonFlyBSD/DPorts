# Ports collection makefile for:  horde-passwd
# Date created:			  Oct 28, 2011
# Whom:				  Martin Matuska (mm@FreeBSD.org)
#
# $FreeBSD: www/horde-passwd/Makefile 319377 2013-05-29 15:02:18Z mm $
#

PORTNAME=	passwd
DISTVERSION=	5.0.0RC1
CATEGORIES=	www pear
PKGNAMEPREFIX=	horde-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde password changing application

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LATEST_LINK=	horde-${PORTNAME}

USE_PHP=	gettext
USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		horde \
		Horde_Auth \
		Horde_Core \
		Horde_Exception \
		Horde_Injector \
		Horde_Util \
		Horde_View

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
