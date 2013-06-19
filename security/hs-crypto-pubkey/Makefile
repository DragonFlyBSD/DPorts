# $FreeBSD: security/hs-crypto-pubkey/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	crypto-pubkey
PORTVERSION=	0.1.3
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Public Key cryptography

LICENSE=	BSD

USE_CABAL=	crypto-numbers crypto-pubkey-types>=0.3 crypto-random-api>=0.2 \
		cryptohash>=0.8

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
