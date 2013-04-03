# $FreeBSD: textproc/hs-hs-bibutils/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	hs-bibutils
PORTVERSION=	4.17
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings to bibutils, the bibliography conversion utilities

LICENSE=	GPLv2

BUILD_DEPENDS=	bibutils>=4.9:${PORTSDIR}/textproc/bibutils
RUN_DEPENDS=	bibutils>=4.9:${PORTSDIR}/textproc/bibutils

USE_CABAL=	syb

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
