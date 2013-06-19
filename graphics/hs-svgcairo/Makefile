# $FreeBSD: graphics/hs-svgcairo/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	svgcairo
PORTVERSION=	0.12.1.1
PORTREVISION=	4
CATEGORIES=	graphics haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the libsvg-cairo library

LICENSE=	BSD

USE_CABAL=	cairo>=0.12 glib>=0.12 mtl
USE_GNOME=	librsvg2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
