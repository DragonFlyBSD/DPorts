# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: audio/hs-OpenAL/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	OpenAL
PORTVERSION=	1.4.0.2
PORTREVISION=	3
CATEGORIES=	audio haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A binding to the OpenAL cross-platform 3D audio API

LICENSE=	BSD

USE_CABAL=	ObjectName StateVar Tensor
USES=		openal:al

INSTALL_PORTEXAMPLES=	@(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR})

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
