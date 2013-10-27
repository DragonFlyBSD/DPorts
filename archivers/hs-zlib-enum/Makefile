# $FreeBSD: archivers/hs-zlib-enum/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	zlib-enum
PORTVERSION=	0.2.3
PORTREVISION=	3
CATEGORIES=	archivers haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Enumerator interface for zlib compression

LICENSE=	MIT

USE_CABAL=	enumerator transformers>=0.2 zlib-bindings
NO_STAGE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
