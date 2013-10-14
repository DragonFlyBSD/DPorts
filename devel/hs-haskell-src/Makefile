# $FreeBSD: devel/hs-haskell-src/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	haskell-src
PORTVERSION=	1.0.1.5
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Support for manipulating Haskell source code

LICENSE=	BSD

USE_HAPPY=	yes
USE_CABAL=	syb

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
