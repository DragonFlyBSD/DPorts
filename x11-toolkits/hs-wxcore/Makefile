# $FreeBSD: x11-toolkits/hs-wxcore/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	wxcore
PORTVERSION=	0.90.0.3
PORTREVISION=	5
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	wxHaskell core

USE_CABAL=	parsec stm wxc>=0.90.0.4 wxdirect>=0.90

USE_WX=		2.9
WX_COMPS=	wx
WX_UNICODE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
