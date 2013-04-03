# Created by: Oliver Braun <obraun@informatik.unibw-muenchen.de>
# $FreeBSD: ports/textproc/hs-HaXml/Makefile,v 1.58 2013/02/05 22:47:14 svnexp Exp $

PORTNAME=	HaXml
PORTVERSION=	1.23.3
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A collection of utilities for using Haskell and XML together

LICENSE=	LGPL21
FILE_LICENSE=	COPYRIGHT

CABAL_SETUP=	Setup.hs
USE_CABAL=	polyparse>=1.5 random

EXECUTABLE=	Canonicalise CanonicaliseLazy DtdToHaskell FpMLToHaskell \
		MkOneOf Validate XsdToHaskell Xtract

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
