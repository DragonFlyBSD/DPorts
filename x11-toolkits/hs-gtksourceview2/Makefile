# $FreeBSD: x11-toolkits/hs-gtksourceview2/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gtksourceview2
PORTVERSION=	0.12.3.1
PORTREVISION=	6
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the GtkSourceView library

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	glib>=0.12 gtk>=0.12 mtl
USE_GNOME=	gtksourceview2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
