# $FreeBSD: devel/hs-ansi-wl-pprint/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	ansi-wl-pprint
PORTVERSION=	0.6.6
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	The Wadler/Leijen Pretty Printer for colored ANSI terminal output

LICENSE=	BSD

USE_CABAL=	ansi-terminal>=0.4.0

CONFIGURE_ARGS+=	--flags="-Example"

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
