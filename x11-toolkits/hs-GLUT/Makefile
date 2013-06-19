# Created by: Volker Stolz <vs@FreeBSD.org>
# $FreeBSD: x11-toolkits/hs-GLUT/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	GLUT
PORTVERSION=	2.4.0.0
PORTEPOCH=	1
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding for the OpenGL Utility Toolkit

LICENSE=	BSD

USE_CABAL=	OpenGL>=2.8 OpenGLRaw>=1.3
USE_GL=		glut

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
