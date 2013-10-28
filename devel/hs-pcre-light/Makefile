# $FreeBSD: devel/hs-pcre-light/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	pcre-light
PORTVERSION=	0.4
PORTREVISION=	10
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Lightweight Haskell regex library compatible with Perl 5

LICENSE=	BSD

LIB_DEPENDS=	pcre:${PORTSDIR}/devel/pcre

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
