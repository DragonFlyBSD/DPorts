# Created by: Jeremy Norris <ishmael27@home.com>
# $FreeBSD: graphics/scrot/Makefile 330591 2013-10-17 01:23:56Z amdmi3 $

PORTNAME=	scrot
PORTVERSION=	0.8
PORTREVISION=	6
CATEGORIES=	graphics
MASTER_SITES=	http://linuxbrit.co.uk/downloads/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A screen capture utility that utilizes Imlib2

LIB_DEPENDS=	libgiblib.so:${PORTSDIR}/graphics/giblib

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/${PORTNAME} man/man1/${PORTNAME}.1.gz
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS
OPTIONS_DEFAULT=DOCS

.include <bsd.port.mk>
