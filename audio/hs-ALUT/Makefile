# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: audio/hs-ALUT/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	ALUT
PORTVERSION=	2.2.0.0
PORTREVISION=	11
CATEGORIES=	audio haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding for the OpenAL Utility Toolkit

LICENSE=	BSD

USE_CABAL=	OpenAL StateVar
NO_STAGE=	yes
USE_OPENAL=	al alut

INSTALL_PORTEXAMPLES=	@(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${EXAMPLESDIR})

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
