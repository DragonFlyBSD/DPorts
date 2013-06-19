# $FreeBSD: x11-toolkits/hs-wx/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	wx
PORTVERSION=	0.90.0.1
PORTREVISION=	4
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	wxHaskell

USE_CABAL=	stm wxcore>=0.90

USE_WX=		2.9
WX_COMPS=	wx
WX_UNICODE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
