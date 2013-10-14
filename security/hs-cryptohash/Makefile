# $FreeBSD: security/hs-cryptohash/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	cryptohash
PORTVERSION=	0.9.0
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Collection of crypto hashes, fast, pure, and practical

LICENSE=	BSD

USE_CABAL=	cereal>=0.2 crypto-api>=0.5 tagged>=0.1

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
