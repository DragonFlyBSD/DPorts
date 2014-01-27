# $FreeBSD: devel/hs-hlibev/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	hlibev
PORTVERSION=	0.4.0
PORTREVISION=	8
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	FFI interface to libev

LICENSE=	BSD

USE_CABAL=	network

LIB_DEPENDS=	ev:${PORTSDIR}/devel/libev

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
