# Created by: thierry@pompo.net
# $FreeBSD: games/libmaitretarot/Makefile 325988 2013-09-02 13:07:49Z bapt $

PORTNAME=		libmaitretarot
PORTVERSION=		0.1.98
PORTREVISION=	4
CATEGORIES=		games
MASTER_SITES=		${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	maitretarot

MAINTAINER=		thierry@FreeBSD.org
COMMENT=		Core library of MaitreTarot, a Tarot card game

USES=		pkgconfig
USE_AUTOTOOLS=	libtool
USE_BZIP2=		yes
GNU_CONFIGURE=		yes
USE_GNOME=		glib20 libxml2 lthack
USE_LDCONFIG=		yes

.include <bsd.port.mk>
