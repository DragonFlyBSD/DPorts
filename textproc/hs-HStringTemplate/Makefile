# $FreeBSD: textproc/hs-HStringTemplate/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	HStringTemplate
PORTVERSION=	0.7.1
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	StringTemplate implementation in Haskell

LICENSE=	BSD

USE_CABAL=	blaze-builder mtl parsec syb text utf8-string void

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
