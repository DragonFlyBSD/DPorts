# $FreeBSD: devel/hs-glade/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	glade
PORTVERSION=	0.12.1
PORTREVISION=	8
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the glade library

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	glib>=0.12 gtk>=0.12
USE_GNOME=	libglade2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
