# Created by: Oliver Braun <obraun@informatik.unibw-muenchen.de>
# $FreeBSD: textproc/hs-HaXml/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	HaXml
PORTVERSION=	1.24
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
