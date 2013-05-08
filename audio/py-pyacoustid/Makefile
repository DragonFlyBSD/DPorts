# Created by: Mark Felder <feld@feld.me>
# $FreeBSD: audio/py-pyacoustid/Makefile 316303 2013-04-23 02:29:29Z swills $

PORTNAME=	pyacoustid
PORTVERSION=	1.0.0
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@feld.me
COMMENT=	Bindings for Chromaprint acoustic fingerprinting and the Acoustid API

LICENSE=	MIT

LIB_DEPENDS=	chromaprint:${PORTSDIR}/audio/chromaprint

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
