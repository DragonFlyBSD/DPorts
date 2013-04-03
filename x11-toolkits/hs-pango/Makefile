# $FreeBSD: ports/x11-toolkits/hs-pango/Makefile,v 1.9 2013/02/05 22:47:15 svnexp Exp $

PORTNAME=	pango
PORTVERSION=	0.12.4
PORTREVISION=	1
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the Pango text rendering engine

LICENSE=	LGPL21
FILE_LICENSE=	COPYING

CABAL_SETUP=	Setup.hs

USE_CABAL=	cairo>=0.12.0 glib>=0.12.0 mtl
USE_GNOME=	pango

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
