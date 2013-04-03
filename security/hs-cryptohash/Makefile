# $FreeBSD: security/hs-cryptohash/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	cryptohash
PORTVERSION=	0.8.3
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Collection of crypto hashes, fast, pure, and practical

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	cereal>=0.2 crypto-api>=0.5 tagged>=0.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
