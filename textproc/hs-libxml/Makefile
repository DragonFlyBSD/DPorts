# $FreeBSD: ports/textproc/hs-libxml/Makefile,v 1.9 2013/02/05 22:47:14 svnexp Exp $

PORTNAME=	libxml
PORTVERSION=	0.1.1
PORTREVISION=	7
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to libxml2

LICENSE=	BSD

USE_CABAL=	mtl
USE_GNOME=	libxml2

CONFIGURE_ARGS+=	--extra-include-dirs="${LOCALBASE}/include/libxml2"

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
