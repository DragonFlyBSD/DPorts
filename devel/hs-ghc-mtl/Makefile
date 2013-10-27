# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-ghc-mtl/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	ghc-mtl
PORTVERSION=	1.0.1.2
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Mtl-compatible version of the Ghc-Api monads and monad-transformers

LICENSE=	BSD

USE_CABAL=	MonadCatchIO-mtl>=0.2.0.0 mtl

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
