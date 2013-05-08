# $FreeBSD: devel/hs-glib/Makefile 316333 2013-04-23 10:13:19Z bapt $

PORTNAME=	glib
PORTVERSION=	0.12.4
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the GLIB library for Gtk2Hs

LICENSE=	LGPL21
FILE_LICENSE=	COPYING

CABAL_SETUP=	Setup.hs

USES=		pkgconfig
USE_CABAL=	gtk2hs-buildtools
USE_GNOME=	glib20

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
