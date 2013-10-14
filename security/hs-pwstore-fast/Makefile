# $FreeBSD: security/hs-pwstore-fast/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	pwstore-fast
PORTVERSION=	2.3
PORTREVISION=	3
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Secure password storage

LICENSE=	BSD

USE_CABAL=	base64-bytestring>=0.1 cryptohash>=0.6 random>=1

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
