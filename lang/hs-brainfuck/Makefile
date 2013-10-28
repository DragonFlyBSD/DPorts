# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: lang/hs-brainfuck/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	brainfuck
PORTVERSION=	0.1
PORTREVISION=	10
CATEGORIES=	lang haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Brainfuck interpreter written in Haskell

LICENSE=	GPLv2

USE_CABAL=	mtl

EXECUTABLE=	bf

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
