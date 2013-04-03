# $FreeBSD: security/hs-pureMD5/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	pureMD5
PORTVERSION=	2.1.2.1
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A Haskell-only implementation of MD5 digest (hash) yalgorithm

LICENSE=	BSD

USE_CABAL=	cereal>=0.2 crypto-api tagged

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
