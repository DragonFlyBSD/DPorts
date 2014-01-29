# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: www/hs-fastcgi/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	fastcgi
PORTVERSION=	3001.0.2.4
PORTREVISION=	3
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell library for writing FastCGI programs

LICENSE=	BSD

USE_CABAL=	cgi>=3000.0.0

LIB_DEPENDS=	fcgi.0:${PORTSDIR}/www/fcgi

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
