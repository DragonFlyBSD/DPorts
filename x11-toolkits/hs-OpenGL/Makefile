# Created by: Volker Stolz <vs@FreeBSD.org>
# $FreeBSD: x11-toolkits/hs-OpenGL/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	OpenGL
PORTVERSION=	2.8.0.0
PORTEPOCH=	1
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding for the OpenGL graphics system

LICENSE=	BSD

USE_CABAL=	GLURaw>=1.1.0.0 OpenGLRaw>=1.3.0.0

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
