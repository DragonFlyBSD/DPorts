# Created by: Jeremy Norris <ishmael27@home.com>
# $FreeBSD: graphics/gozer/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	gozer
PORTVERSION=	0.7
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	http://linuxbrit.co.uk/downloads/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Commandline text rendering utility - creates images from text

LIB_DEPENDS=	giblib.1:${PORTSDIR}/graphics/giblib

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-giblib-prefix=${LOCALBASE}

MAN1=		gozer.1

.if defined(NOPORTDOCS)
MAKE_ENV=	NO_DOC=yes
.endif

NO_STAGE=	yes
.include <bsd.port.mk>
