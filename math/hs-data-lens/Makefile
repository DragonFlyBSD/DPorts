# $FreeBSD: math/hs-data-lens/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	data-lens
PORTVERSION=	2.10.2
PORTREVISION=	4
CATEGORIES=	math haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell 98 lenses

LICENSE=	BSD

USE_CABAL=	comonad>=1.1.1.3 comonad-transformers>=2.0 \
		semigroupoids>=1.2.4 transformers>=0.2.0

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
