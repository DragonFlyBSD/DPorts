# $FreeBSD: textproc/hs-libxml/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	libxml
PORTVERSION=	0.1.1
PORTREVISION=	10
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to libxml2

LICENSE=	BSD

USE_CABAL=	mtl
USE_GNOME=	libxml2

CONFIGURE_ARGS+=	--extra-include-dirs="${LOCALBASE}/include/libxml2"

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
