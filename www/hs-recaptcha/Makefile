# $FreeBSD: www/hs-recaptcha/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	recaptcha
PORTVERSION=	0.1
PORTREVISION=	6
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Functions for using the reCAPTCHA service in web applications

LICENSE=	BSD

USE_CABAL=	HTTP>=3001.1.4 network>=2.2.0.1 xhtml>=3000.0

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
