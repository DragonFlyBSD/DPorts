# $FreeBSD: devel/hs-gio/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	gio
PORTVERSION=	0.12.4
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the GIO

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	glib>=0.12.0 mtl

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
