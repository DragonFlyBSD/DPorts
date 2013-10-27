# $FreeBSD: security/hs-pureMD5/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	pureMD5
PORTVERSION=	2.1.2.1
PORTREVISION=	4
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell-only implementation of MD5 digest (hash) yalgorithm

LICENSE=	BSD

USE_CABAL=	cereal>=0.2 crypto-api tagged

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
