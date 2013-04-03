# $FreeBSD: ports/devel/hs-glade/Makefile,v 1.9 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	glade
PORTVERSION=	0.12.1
PORTREVISION=	5
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the glade library

LICENSE=	LGPL21
FILE_LICENSE=	COPYING

CABAL_SETUP=	Setup.hs
USE_CABAL=	glib>=0.12 gtk>=0.12
USE_GNOME=	libglade2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
