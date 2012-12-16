# New ports collection makefile for:	libmaitretarot
# Date created:		Sun 7 mar 2004
# Whom:			thierry@pompo.net
#
# $FreeBSD: ports/games/libmaitretarot/Makefile,v 1.14 2012/11/17 05:57:43 svnexp Exp $
#

PORTNAME=		libmaitretarot
PORTVERSION=		0.1.98
PORTREVISION=	4
CATEGORIES=		games
MASTER_SITES=		${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	maitretarot

MAINTAINER=		thierry@FreeBSD.org
COMMENT=		Core library of MaitreTarot, a Tarot card game

USE_AUTOTOOLS=	libtool
USE_BZIP2=		yes
GNU_CONFIGURE=		yes
USE_GNOME=		glib20 libxml2 lthack
USE_LDCONFIG=		yes

.include <bsd.port.mk>
