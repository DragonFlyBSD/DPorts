# $FreeBSD: graphics/hs-svgcairo/Makefile 326995 2013-09-11 17:17:35Z antoine $

PORTNAME=	svgcairo
PORTVERSION=	0.12.1.1
PORTREVISION=	4
CATEGORIES=	graphics haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the libsvg-cairo library

LICENSE=	BSD

USES=		pkgconfig
USE_CABAL=	cairo>=0.12 glib>=0.12 mtl
USE_GNOME=	librsvg2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
