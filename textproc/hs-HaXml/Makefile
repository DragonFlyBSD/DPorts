# Created by: Oliver Braun <obraun@informatik.unibw-muenchen.de>
# $FreeBSD: textproc/hs-HaXml/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	HaXml
PORTVERSION=	1.24
PORTREVISION=	1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Collection of utilities for using Haskell and XML together

LICENSE=	LGPL21

USE_CABAL=	polyparse>=1.9 random

EXECUTABLE=	Canonicalise CanonicaliseLazy DtdToHaskell FpMLToHaskell \
		MkOneOf Validate XsdToHaskell Xtract

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
