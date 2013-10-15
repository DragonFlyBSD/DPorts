# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: security/ckpass/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	ckpass
PORTVERSION=	0.2
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Ncurses based password database client

LICENSE=	GPLv3

LIB_DEPENDS=	kpass:${PORTSDIR}/security/libkpass

GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/ckpass

NO_STAGE=	yes
.include <bsd.port.mk>
