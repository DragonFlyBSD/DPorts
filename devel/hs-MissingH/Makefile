# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: ports/devel/hs-MissingH/Makefile,v 1.12 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	MissingH
PORTVERSION=	1.2.0.0
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Large Haskell utility library

LICENSE=	BSD

CABAL_SETUP=	Setup.hs
USE_CABAL=	hslogger HUnit mtl network parsec random regex-compat

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
