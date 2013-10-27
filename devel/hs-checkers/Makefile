# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-checkers/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	checkers
PORTVERSION=	0.3.1
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Check properties on standard classes and data structures

LICENSE=	BSD

USE_CABAL=	QuickCheck>=2.3 random

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
