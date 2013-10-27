# $FreeBSD: devel/hs-hinotify/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	hinotify
PORTVERSION=	0.3.5
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to inotify

LICENSE=	BSD

LIB_DEPENDS=	inotify.0:${PORTSDIR}/devel/libinotify

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
