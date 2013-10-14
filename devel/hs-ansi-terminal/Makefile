# $FreeBSD: devel/hs-ansi-terminal/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	ansi-terminal
PORTVERSION=	0.6
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Simple ANSI terminal support, with Windows compatibility

LICENSE=	BSD

CONFIGURE_ARGS+=	--flags="-Example"

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
