# $FreeBSD: devel/hs-uuid/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	uuid
PORTVERSION=	1.2.13
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Creating, comparing, parsing and printing Universally Unique Identifiers

LICENSE=	BSD

USE_CABAL=	cryptohash>=0.7 maccatcher>=1.0 random>=1.0.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
