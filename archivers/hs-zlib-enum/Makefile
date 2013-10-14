# $FreeBSD: archivers/hs-zlib-enum/Makefile 327699 2013-09-20 13:11:20Z bapt $

PORTNAME=	zlib-enum
PORTVERSION=	0.2.3
PORTREVISION=	2
CATEGORIES=	archivers haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Enumerator interface for zlib compression

LICENSE=	MIT

USE_CABAL=	enumerator transformers>=0.2 zlib-bindings
NO_STAGE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
