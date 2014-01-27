# Created by: Oliver Braun <obraun@informatik.unibw-muenchen.de>
# $FreeBSD: textproc/hs-HaXml/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	HaXml
PORTVERSION=	1.24
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Collection of utilities for using Haskell and XML together

LICENSE=	LGPL21

USE_CABAL=	polyparse>=1.9 random

EXECUTABLE=	Canonicalise CanonicaliseLazy DtdToHaskell FpMLToHaskell \
		MkOneOf Validate XsdToHaskell Xtract

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
