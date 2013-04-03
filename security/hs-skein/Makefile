# $FreeBSD: security/hs-skein/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	skein
PORTVERSION=	0.1.0.12
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Skein, a family of cryptographic hash functions

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	cereal>=0.3 crypto-api>=0.6 tagged>=0.2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
