# $FreeBSD: x11-toolkits/hs-wx/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	wx
PORTVERSION=	0.90.0.1
PORTREVISION=	6
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	wxHaskell

USE_CABAL=	stm wxcore>=0.90

USE_WX=		2.9
WX_COMPS=	wx
WX_UNICODE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
