# $FreeBSD: devel/hs-hinotify/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	hinotify
PORTVERSION=	0.3.5
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to inotify

LICENSE=	BSD

LIB_DEPENDS=	inotify.0:${PORTSDIR}/devel/libinotify

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
