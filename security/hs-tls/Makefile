# $FreeBSD: security/hs-tls/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tls
PORTVERSION=	1.1.2
PORTREVISION=	3
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	TLS/SSL protocol native implementation (Server and Client)

LICENSE=	BSD

USE_CABAL=	cereal>=0.3 certificate>=1.3.0 crypto-pubkey \
		crypto-random-api>=0.2 cryptohash>=0.6 mtl network

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
