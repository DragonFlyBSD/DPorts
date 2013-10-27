# $FreeBSD: security/hs-cryptohash/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	cryptohash
PORTVERSION=	0.9.0
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Collection of crypto hashes, fast, pure, and practical

LICENSE=	BSD

USE_CABAL=	cereal>=0.2 crypto-api>=0.5 tagged>=0.1

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
