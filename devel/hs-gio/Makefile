# $FreeBSD: devel/hs-gio/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	gio
PORTVERSION=	0.12.4
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the GIO

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	glib>=0.12.0 mtl

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
