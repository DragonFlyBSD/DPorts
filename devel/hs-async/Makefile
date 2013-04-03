# $FreeBSD: ports/devel/hs-async/Makefile,v 1.2 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	async
PORTVERSION=	2.0.1.3
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Run IO operations asynchronously and wait for their results

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	stm>=2.2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
