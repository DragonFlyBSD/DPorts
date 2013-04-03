# $FreeBSD: ports/graphics/hs-svgcairo/Makefile,v 1.9 2013/02/05 22:47:11 svnexp Exp $

PORTNAME=	svgcairo
PORTVERSION=	0.12.1.1
PORTREVISION=	3
CATEGORIES=	graphics haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the libsvg-cairo library

LICENSE=	BSD
FILE_LICENSE=	COPYING

CABAL_SETUP=	Setup.hs
USE_CABAL=	cairo>=0.12 glib>=0.12 mtl
USE_GNOME=	librsvg2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
