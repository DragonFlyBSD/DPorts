# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: lang/hs-brainfuck/Makefile 327741 2013-09-20 19:53:09Z bapt $

PORTNAME=	brainfuck
PORTVERSION=	0.1
PORTREVISION=	9
CATEGORIES=	lang haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Brainfuck interpreter written in Haskell

LICENSE=	GPLv2

USE_CABAL=	mtl

EXECUTABLE=	bf

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
