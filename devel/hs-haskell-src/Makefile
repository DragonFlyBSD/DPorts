# $FreeBSD: ports/devel/hs-haskell-src/Makefile,v 1.8 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	haskell-src
PORTVERSION=	1.0.1.5
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Support for manipulating Haskell source code

LICENSE=	BSD

CABAL_SETUP=	Setup.hs
USE_HAPPY=	yes
USE_CABAL=	syb

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
