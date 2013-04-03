# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: ports/lang/hs-brainfuck/Makefile,v 1.12 2013/02/05 22:47:11 svnexp Exp $

PORTNAME=	brainfuck
PORTVERSION=	0.1
PORTREVISION=	8
CATEGORIES=	lang haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Brainfuck interpreter written in Haskell

LICENSE=	GPLv2

CABAL_SETUP=	Setup.hs
USE_CABAL=	mtl

EXECUTABLE=	bf

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
