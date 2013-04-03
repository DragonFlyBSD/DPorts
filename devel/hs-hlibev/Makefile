# $FreeBSD: ports/devel/hs-hlibev/Makefile,v 1.7 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	hlibev
PORTVERSION=	0.4.0
PORTREVISION=	5
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	FFI interface to libev

LICENSE=	BSD

USE_CABAL=	network

LIB_DEPENDS=	ev:${PORTSDIR}/devel/libev

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
