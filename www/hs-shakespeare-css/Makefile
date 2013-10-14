# $FreeBSD: www/hs-shakespeare-css/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	shakespeare-css
PORTVERSION=	1.0.5.1
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Stick your Haskell variables into CSS at compile time

LICENSE=	MIT

USE_CABAL=	parsec>=2 shakespeare>=1.0 text>=0.11.1.1 transformers

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
