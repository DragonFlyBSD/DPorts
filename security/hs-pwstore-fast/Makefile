# $FreeBSD: security/hs-pwstore-fast/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	pwstore-fast
PORTVERSION=	2.3
PORTREVISION=	4
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Secure password storage

LICENSE=	BSD

USE_CABAL=	base64-bytestring>=0.1 cryptohash>=0.6 random>=1

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
