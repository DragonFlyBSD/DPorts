# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-testpack/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	testpack
PORTVERSION=	2.1.2.1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Test Utility Pack for HUnit and QuickCheck

LICENSE=	LGPL21
FILE_LICENSE=	COPYRIGHT

CABAL_SETUP=	Setup.hs

USE_CABAL=	HUnit mtl QuickCheck>=2.1.0.3 random

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
