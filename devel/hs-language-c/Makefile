# $FreeBSD: ports/devel/hs-language-c/Makefile,v 1.15 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	language-c
PORTVERSION=	0.3.2.1
PORTREVISION=	6
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Analysis and generation of C code in Haskell

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_ALEX=	yes
USE_HAPPY=	yes
USE_CABAL=	syb

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
