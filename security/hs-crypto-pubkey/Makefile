# $FreeBSD: security/hs-crypto-pubkey/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	crypto-pubkey
PORTVERSION=	0.1.3
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Public Key cryptography

LICENSE=	BSD

USE_CABAL=	crypto-numbers crypto-pubkey-types>=0.3 crypto-random-api>=0.2 \
		cryptohash>=0.8

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
