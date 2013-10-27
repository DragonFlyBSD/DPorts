# $FreeBSD: devel/hs-hlint/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	hlint
PORTVERSION=	1.8.45
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Source code suggestions

LICENSE=	BSD

USE_CABAL=	cpphs>=1.11 haskell-src-exts>=1.11 hscolour>=1.17 \
		transformers>=0.0 uniplate>=1.5

EXECUTABLE=	hlint

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
