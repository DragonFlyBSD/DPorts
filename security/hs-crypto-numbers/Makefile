# $FreeBSD: security/hs-crypto-numbers/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	crypto-numbers
PORTVERSION=	0.1.3
PORTREVISION=	2
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Cryptographic numbers: functions and algorithms

LICENSE=	BSD

USE_CABAL=	crypto-random-api>=0.2 vector

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
