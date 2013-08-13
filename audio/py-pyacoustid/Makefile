# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: audio/py-pyacoustid/Makefile 323891 2013-07-29 15:03:58Z feld $

PORTNAME=	pyacoustid
PORTVERSION=	1.0.0
PORTREVISION=	1
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	Bindings for Chromaprint acoustic fingerprinting and the Acoustid API

LICENSE=	MIT

LIB_DEPENDS=	chromaprint:${PORTSDIR}/audio/chromaprint

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
