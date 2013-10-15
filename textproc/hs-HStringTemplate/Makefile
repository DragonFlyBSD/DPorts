# $FreeBSD: textproc/hs-HStringTemplate/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	HStringTemplate
PORTVERSION=	0.7.1
PORTREVISION=	1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	StringTemplate implementation in Haskell

LICENSE=	BSD

USE_CABAL=	blaze-builder mtl parsec syb text utf8-string void

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
