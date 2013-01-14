# Ports collection makefile for:  horde-webmail
# Date created:			  7 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/mail/horde-webmail/Makefile,v 1.2 2012/12/18 13:28:43 svnexp Exp $
#

PORTNAME=	webmail
PORTVERSION=	5.0.2
CATEGORIES=	mail www pear
PKGNAMEPREFIX=	horde-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Groupware Webmail Edition

CONFLICTS=	horde-groupware-[456]*

LATEST_LINK=	horde-${PORTNAME}

USE_HORDE_BUILD=	Horde_Role
USE_HORDE_RUN=	Horde_Role \
		content \
		horde \
		imp \
		ingo \
		kronolith \
		mnemo \
		nag \
		timeobjects \
		turba

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
