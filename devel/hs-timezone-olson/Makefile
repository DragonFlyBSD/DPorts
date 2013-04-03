# $FreeBSD: ports/devel/hs-timezone-olson/Makefile,v 1.1 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	timezone-olson
PORTVERSION=	0.1.2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Pure Haskell parser and renderer for binary Olson timezone files

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	timezone-series>=0.1.0

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
