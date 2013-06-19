# $FreeBSD: security/hs-tls/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	tls
PORTVERSION=	1.1.2
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	TLS/SSL protocol native implementation (Server and Client)

LICENSE=	BSD

USE_CABAL=	cereal>=0.3 certificate>=1.3.0 crypto-pubkey \
		crypto-random-api>=0.2 cryptohash>=0.6 mtl network

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
