# $FreeBSD: x11-toolkits/hs-gtk/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	gtk
PORTVERSION=	0.12.4
PORTREVISION=	2
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the Gtk+ graphical user interface library

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	cairo>=0.12.0 gio>=0.12.0 glib>=0.12.0 mtl pango>=0.12.0
USE_GNOME=	gtk20

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
