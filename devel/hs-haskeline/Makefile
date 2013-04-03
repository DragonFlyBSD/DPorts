# Created by:  Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-haskeline/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	haskeline
PORTVERSION=	0.7.0.3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Command-line interface for user input, written in Haskell

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	transformers>=0.2
USE_ICONV=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
