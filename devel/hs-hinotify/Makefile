# $FreeBSD: ports/devel/hs-hinotify/Makefile,v 1.2 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	hinotify
PORTVERSION=	0.3.5
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to inotify

LICENSE=	BSD

LIB_DEPENDS=	inotify.0:${PORTSDIR}/devel/libinotify

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
