# $FreeBSD: ports/x11-toolkits/hs-wx/Makefile,v 1.7 2013/02/05 22:47:15 svnexp Exp $

PORTNAME=	wx
PORTVERSION=	0.90.0.1
PORTREVISION=	3
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	wxHaskell

USE_CABAL=	stm wxcore>=0.90

USE_WX=		2.9
WX_COMPS=	wx
WX_UNICODE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
