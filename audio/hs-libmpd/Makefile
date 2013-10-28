# $FreeBSD: audio/hs-libmpd/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	libmpd
PORTVERSION=	0.8.0.2
PORTREVISION=	2
CATEGORIES=	audio haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	An MPD client library

LICENSE=	LGPL21

USE_CABAL=	mtl>=2.0 network>=2.1 text utf8-string>=0.3.1
NO_STAGE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
