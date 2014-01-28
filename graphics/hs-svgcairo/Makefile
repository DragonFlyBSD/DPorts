# $FreeBSD: graphics/hs-svgcairo/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	svgcairo
PORTVERSION=	0.12.1.1
PORTREVISION=	6
CATEGORIES=	graphics haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the libsvg-cairo library

LICENSE=	BSD

USES=		pkgconfig
USE_CABAL=	cairo>=0.12 glib>=0.12 mtl
USE_GNOME=	librsvg2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
