# $FreeBSD: devel/hs-ansi-terminal/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	ansi-terminal
PORTVERSION=	0.6
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Simple ANSI terminal support, with Windows compatibility

LICENSE=	BSD

CONFIGURE_ARGS+=	--flags="-Example"

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
