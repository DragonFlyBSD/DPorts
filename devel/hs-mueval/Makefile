# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-mueval/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	mueval
PORTVERSION=	0.9
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Safely evaluate pure Haskell expressions

LICENSE=	BSD

USE_CABAL=	hint>=0.3.1 mtl>2 show>=0.3 simple-reflect utf8-string

EXECUTABLE=	mueval mueval-core

CONFIGURE_ARGS+=	--ghc-options="-dynamic"

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
