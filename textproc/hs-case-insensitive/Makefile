# $FreeBSD: textproc/hs-case-insensitive/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	case-insensitive
PORTVERSION=	1.0.0.2
PORTREVISION=	1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Case insensitive string comparison

LICENSE=	BSD

USE_CABAL=	hashable>=1.0 text>=0.3

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
