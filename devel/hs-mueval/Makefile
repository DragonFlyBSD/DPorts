# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-mueval/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	mueval
PORTVERSION=	0.9
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Safely evaluate pure Haskell expressions

LICENSE=	BSD

USE_CABAL=	hint>=0.3.1 mtl>2 show>=0.3 simple-reflect utf8-string

EXECUTABLE=	mueval mueval-core

CONFIGURE_ARGS+=	--ghc-options="-dynamic"

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
