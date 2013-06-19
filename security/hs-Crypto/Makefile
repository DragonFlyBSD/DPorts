# $FreeBSD: security/hs-Crypto/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	Crypto
PORTVERSION=	4.2.5.1
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Collects together existing Haskell cryptographic functions

USE_CABAL=	HUnit QuickCheck>=2.4.0.1 random

EXECUTABLE=	HMACTest QuickTest RSATest SHA1Test SymmetricTest WordListTest

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
