# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-MissingH/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	MissingH
PORTVERSION=	1.2.0.0
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Large Haskell utility library

LICENSE=	BSD

USE_CABAL=	hslogger HUnit mtl network parsec random regex-compat

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
