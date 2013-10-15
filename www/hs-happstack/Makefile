# $FreeBSD: www/hs-happstack/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	happstack
PORTVERSION=	7.0.1
PORTREVISION=	3
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	The haskell application server stack + code generation

LICENSE=	BSD

USE_CABAL=	happstack-server>=7.0

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
