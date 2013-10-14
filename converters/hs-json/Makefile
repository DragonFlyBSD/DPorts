# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: converters/hs-json/Makefile 327715 2013-09-20 16:05:24Z bapt $

PORTNAME=	json
PORTVERSION=	0.7
PORTREVISION=	2
CATEGORIES=	converters haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Support for serialising Haskell to and from JSON

LICENSE=	BSD

USE_CABAL=	mtl syb>=0.3.3 text

CONFIGURE_ARGS+=	--flags="split-base generic -parsec -pretty -mapdict"

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
