# $FreeBSD: devel/hs-vault/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	vault
PORTVERSION=	0.2.0.4
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Persistent store for values of arbitrary types

LICENSE=	BSD

USE_CABAL=	hashable>=1.1 unordered-containers>=0.2.1.0

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
