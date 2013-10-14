# $FreeBSD: security/hs-crypto-pubkey/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	crypto-pubkey
PORTVERSION=	0.1.3
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Public Key cryptography

LICENSE=	BSD

USE_CABAL=	crypto-numbers crypto-pubkey-types>=0.3 crypto-random-api>=0.2 \
		cryptohash>=0.8

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
