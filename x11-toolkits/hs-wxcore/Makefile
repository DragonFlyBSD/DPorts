# $FreeBSD: x11-toolkits/hs-wxcore/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	wxcore
PORTVERSION=	0.90.0.3
PORTREVISION=	4
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	wxHaskell core

USE_CABAL=	parsec stm wxc>=0.90.0.4 wxdirect>=0.90

USE_WX=		2.9
WX_COMPS=	wx
WX_UNICODE=	yes

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
