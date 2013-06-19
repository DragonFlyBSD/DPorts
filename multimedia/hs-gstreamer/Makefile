# $FreeBSD: multimedia/hs-gstreamer/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	gstreamer
PORTVERSION=	0.12.1.2
PORTREVISION=	2
CATEGORIES=	multimedia haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the GStreamer open source multimedia framework

LIB_DEPENDS=	gstreamer:${PORTSDIR}/multimedia/gstreamer

LICENSE=	LGPL21

USE_CABAL=	glib>=0.12 mtl

BUILD_DEPENDS+=	gstreamer-plugins>=0.10:${PORTSDIR}/multimedia/gstreamer-plugins

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
