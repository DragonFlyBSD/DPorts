# $FreeBSD: www/hs-recaptcha/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	recaptcha
PORTVERSION=	0.1
PORTREVISION=	5
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Functions for using the reCAPTCHA service in web applications

LICENSE=	BSD

USE_CABAL=	HTTP>=3001.1.4 network>=2.2.0.1 xhtml>=3000.0

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
