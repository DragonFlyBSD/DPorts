# $FreeBSD: www/hs-shakespeare-js/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	shakespeare-js
PORTVERSION=	1.1.4
PORTREVISION=	1
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Stick your Haskell variables into JavaScript at compile time

LICENSE=	MIT

USE_CABAL=	aeson>=0.5 shakespeare>=1.0.5 text>=0.7

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
