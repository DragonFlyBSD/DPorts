# $FreeBSD: www/hs-happstack/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	happstack
PORTVERSION=	7.0.1
PORTREVISION=	4
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	The haskell application server stack + code generation

LICENSE=	BSD

USE_CABAL=	happstack-server>=7.0

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
