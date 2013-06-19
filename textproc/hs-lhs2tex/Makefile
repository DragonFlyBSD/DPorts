# Created by: mainland@apeiron.net
# $FreeBSD: textproc/hs-lhs2tex/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	lhs2tex
PORTVERSION=	1.18.1
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Preprocessor for typesetting Haskell sources with LaTeX

LICENSE=	GPLv2

USE_CABAL=	mtl regex-compat
USE_TEX=	latex

STANDALONE=	yes
EXECUTABLE=	lhs2TeX

MAN1=		lhs2TeX.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
