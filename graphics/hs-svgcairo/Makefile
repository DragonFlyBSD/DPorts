# $FreeBSD: graphics/hs-svgcairo/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	svgcairo
PORTVERSION=	0.12.1.1
PORTREVISION=	5
CATEGORIES=	graphics haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the libsvg-cairo library

LICENSE=	BSD

USES=		pkgconfig
USE_CABAL=	cairo>=0.12 glib>=0.12 mtl
USE_GNOME=	librsvg2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
