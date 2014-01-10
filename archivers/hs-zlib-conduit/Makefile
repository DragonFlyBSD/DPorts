# $FreeBSD: archivers/hs-zlib-conduit/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	zlib-conduit
PORTVERSION=	1.0.0
PORTREVISION=	3
CATEGORIES=	archivers haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Streaming compression/decompression via conduits

LICENSE=	BSD

USE_CABAL=	conduit>=1.0 transformers>=0.2.2 void zlib-bindings>=0.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
