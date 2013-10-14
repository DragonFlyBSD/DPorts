# $FreeBSD: www/hs-cookie/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	cookie
PORTVERSION=	0.4.0.1
PORTREVISION=	2
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	HTTP cookie parsing and rendering

LICENSE=	BSD

USE_CABAL=	blaze-builder>=0.2.1 data-default text>=0.7

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
