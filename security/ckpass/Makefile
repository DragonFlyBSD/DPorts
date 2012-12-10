# New ports collection makefile for:	ckpass
# Date created:		2011-09-12
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/security/ckpass/Makefile,v 1.4 2012/11/17 06:01:01 svnexp Exp $
#

PORTNAME=	ckpass
PORTVERSION=	0.1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	An ncurses based password database client

LICENSE=	GPLv3

LIB_DEPENDS=	kpass.0:${PORTSDIR}/security/libkpass

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LDFLAGS="-L${LOCALBASE}/lib"
CPPFLAGS+=	"-I${LOCALBASE}/include"

PLIST_FILES=	bin/ckpass

.include <bsd.port.mk>
