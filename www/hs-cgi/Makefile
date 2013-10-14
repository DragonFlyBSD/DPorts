# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: www/hs-cgi/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	cgi
PORTVERSION=	3001.1.7.5
PORTEPOCH=	1
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell library for writing CGI programs

LICENSE=	BSD

USE_CABAL=	extensible-exceptions mtl>=1 network>=2 parsec>=2 xhtml>=3000

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
