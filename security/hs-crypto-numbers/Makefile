# $FreeBSD: security/hs-crypto-numbers/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	crypto-numbers
PORTVERSION=	0.1.3
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Cryptographic numbers: functions and algorithms

LICENSE=	BSD

USE_CABAL=	crypto-random-api>=0.2 vector

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
