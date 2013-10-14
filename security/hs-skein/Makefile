# $FreeBSD: security/hs-skein/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	skein
PORTVERSION=	1.0.3
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Skein, a family of cryptographic hash functions

LICENSE=	BSD

USE_CABAL=	cereal>=0.3 crypto-api>=0.6 tagged>=0.2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
