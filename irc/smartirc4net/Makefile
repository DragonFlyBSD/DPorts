# New ports collection makefile for:	smartirc4net
# Date created:		2009-08-25
# Whom:			Romain Tartiere <romain@blogreen.org>
#
# $FreeBSD: ports/irc/smartirc4net/Makefile,v 1.4 2012/11/17 05:58:30 svnexp Exp $
#

PORTNAME=	smartirc4net
PORTVERSION=	0.4.5.1
CATEGORIES=	irc
MASTER_SITES=	http://www.smuxi.org/jaws/data/files/

MAINTAINER=	mono@FreeBSD.org
COMMENT=	Multi-layered IRC library

BUILD_DEPENDS=	mono:${PORTSDIR}/lang/mono
RUN_DEPENDS:=	${BUILD_DEPENDS}

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehack

.include <bsd.port.mk>
