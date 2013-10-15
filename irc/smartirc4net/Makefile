# Created by: Romain Tartiere <romain@blogreen.org>
# $FreeBSD: irc/smartirc4net/Makefile 327736 2013-09-20 18:44:49Z bapt $

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
USES=	pathfix pkgconfig

NO_STAGE=	yes
.include <bsd.port.mk>
