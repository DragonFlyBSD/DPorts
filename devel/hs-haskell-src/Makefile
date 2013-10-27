# $FreeBSD: devel/hs-haskell-src/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	haskell-src
PORTVERSION=	1.0.1.5
PORTREVISION=	5
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Support for manipulating Haskell source code

LICENSE=	BSD

USE_HAPPY=	yes
USE_CABAL=	syb

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
