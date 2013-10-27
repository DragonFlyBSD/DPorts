# $FreeBSD: security/hs-tls/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	tls
PORTVERSION=	1.1.2
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	TLS/SSL protocol native implementation (Server and Client)

LICENSE=	BSD

USE_CABAL=	cereal>=0.3 certificate>=1.3.0 crypto-pubkey \
		crypto-random-api>=0.2 cryptohash>=0.6 mtl network

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
