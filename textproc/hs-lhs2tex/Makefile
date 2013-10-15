# Created by: mainland@apeiron.net
# $FreeBSD: textproc/hs-lhs2tex/Makefile 327773 2013-09-20 23:17:30Z bapt $

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

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
