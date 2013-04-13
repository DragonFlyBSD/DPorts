# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD: security/ckpass/Makefile 315566 2013-03-29 19:33:41Z cs $
#

PORTNAME=	ckpass
PORTVERSION=	0.1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Ncurses based password database client

LICENSE=	GPLv3

LIB_DEPENDS=	kpass.0:${PORTSDIR}/security/libkpass

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LDFLAGS="-L${LOCALBASE}/lib"
CPPFLAGS+=	"-I${LOCALBASE}/include"

PLIST_FILES=	bin/ckpass

.include <bsd.port.mk>
