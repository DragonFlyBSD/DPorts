# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: audio/hs-ALUT/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	ALUT
PORTVERSION=	2.2.0.0
PORTREVISION=	12
CATEGORIES=	audio haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding for the OpenAL Utility Toolkit

LICENSE=	BSD

USE_CABAL=	OpenAL StateVar
USES=		openal:al,alut

INSTALL_PORTEXAMPLES=	@(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR})

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
