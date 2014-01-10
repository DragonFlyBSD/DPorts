# $FreeBSD: devel/hs-hashed-storage/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	hashed-storage
PORTVERSION=	0.5.10
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Hashed file storage support code

LICENSE=	BSD

USE_CABAL=	dataenc extensible-exceptions mmap>=0.5 mtl zlib

CONFIGURE_ARGS+=	--flags="-test"

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
