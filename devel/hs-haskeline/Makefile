# Created by:  Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-haskeline/Makefile 316654 2013-04-27 08:50:46Z mva $

PORTNAME=	haskeline
PORTVERSION=	0.7.0.3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Command-line interface for user input, written in Haskell

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	transformers>=0.2
USES+=		iconv

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
