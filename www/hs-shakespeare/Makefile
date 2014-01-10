# $FreeBSD: www/hs-shakespeare/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	shakespeare
PORTVERSION=	1.0.5
PORTREVISION=	2
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Toolkit for making compile-time interpolated templates

LICENSE=	MIT

USE_CABAL=	parsec>=2 system-fileio>=0.3 system-filepath>=0.4 \
		text>=0.7

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
