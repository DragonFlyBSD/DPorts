# Created by: mainland@apeiron.net
# $FreeBSD: textproc/hs-lhs2tex/Makefile 317899 2013-05-11 17:58:55Z hrs $

PORTNAME=	lhs2tex
PORTVERSION=	1.18.1
PORTREVISION=	1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Preprocessor for typesetting Haskell sources with LaTeX

LICENSE=	GPLv2

CABAL_SETUP=	Setup.hs
USE_CABAL=	mtl regex-compat
USE_TEX=	latex

STANDALONE=	yes
EXECUTABLE=	lhs2TeX

MAN1=		lhs2TeX.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
