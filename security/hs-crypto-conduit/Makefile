# $FreeBSD: security/hs-crypto-conduit/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	crypto-conduit
PORTVERSION=	0.5.2
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Conduit interface for cryptographic operations (from crypto-api)

LICENSE=	BSD

USE_CABAL=	cereal>=0.3 conduit>=1.0 crypto-api>=0.9 transformers>=0.2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
