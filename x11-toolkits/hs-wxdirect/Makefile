# $FreeBSD: x11-toolkits/hs-wxdirect/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	wxdirect
PORTVERSION=	0.90.0.1
PORTREVISION=	4
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Helper tool for building wxHaskell

LICENSE=	BSD

USE_CABAL=	parsec>=2.1.0 strict

EXECUTABLE=	wxdirect

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
