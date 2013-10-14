# $FreeBSD: security/hs-crypto-conduit/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	crypto-conduit
PORTVERSION=	0.5.2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Conduit interface for cryptographic operations (from crypto-api)

LICENSE=	BSD

USE_CABAL=	cereal>=0.3 conduit>=1.0 crypto-api>=0.9 transformers>=0.2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
