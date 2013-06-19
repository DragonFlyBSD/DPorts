# $FreeBSD: devel/hs-glib/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	glib
PORTVERSION=	0.12.4
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the GLIB library for Gtk2Hs

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	gtk2hs-buildtools
USE_GNOME=	glib20

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
