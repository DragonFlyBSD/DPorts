# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-haskeline/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	haskeline
PORTVERSION=	0.7.0.3
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Command-line interface for user input, written in Haskell

LICENSE=	BSD

USE_CABAL=	transformers>=0.2
USES+=		iconv

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
