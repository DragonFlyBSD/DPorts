# Created by: Volker Stolz <vs@FreeBSD.org>
# $FreeBSD: ports/x11-toolkits/hs-OpenGL/Makefile,v 1.21 2013/02/05 22:47:15 svnexp Exp $

PORTNAME=	OpenGL
PORTVERSION=	2.2.3.1
PORTREVISION=	4
PORTEPOCH=	1
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A binding for the OpenGL graphics system

LICENSE=	BSD

CABAL_SETUP=	Setup.hs
USE_GL=		gl glut

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
