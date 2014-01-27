# $FreeBSD: devel/hs-hashed-storage/Makefile 340722 2014-01-22 17:00:46Z mat $

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
