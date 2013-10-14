# $FreeBSD: www/hs-shakespeare/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	shakespeare
PORTVERSION=	1.0.5
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Toolkit for making compile-time interpolated templates

LICENSE=	MIT

USE_CABAL=	parsec>=2 system-fileio>=0.3 system-filepath>=0.4 \
		text>=0.7

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
