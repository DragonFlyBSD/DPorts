# $FreeBSD: archivers/hs-zlib-bindings/Makefile 327699 2013-09-20 13:11:20Z bapt $

PORTNAME=	zlib-bindings
PORTVERSION=	0.1.1.3
PORTREVISION=	1
CATEGORIES=	archivers haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Low-level bindings to the zlib package

LICENSE=	BSD

USE_CABAL=	zlib>=0.5.2.0
NO_STAGE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
