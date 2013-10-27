# $FreeBSD: devel/hs-quickcheck-io/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	quickcheck-io
PORTVERSION=	0.1.0
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Use HUnit assertions as QuickCheck properties

LICENSE=	MIT

USE_CABAL=	HUnit>=1.2.5 QuickCheck>=2.5.1

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
