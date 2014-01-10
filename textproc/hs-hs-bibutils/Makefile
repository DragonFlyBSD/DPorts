# $FreeBSD: textproc/hs-hs-bibutils/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	hs-bibutils
PORTVERSION=	5.0
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings to bibutils, the bibliography conversion utilities

LICENSE=	GPLv2

BUILD_DEPENDS=	bibutils>=5.0:${PORTSDIR}/textproc/bibutils
RUN_DEPENDS=	bibutils>=5.0:${PORTSDIR}/textproc/bibutils

USE_CABAL=	syb

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
