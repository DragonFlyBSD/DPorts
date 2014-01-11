# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: audio/py-pylast/Makefile 338168 2013-12-30 20:55:18Z ohauer $

PORTNAME=	pylast
PORTVERSION=	0.5.11
CATEGORIES=	audio python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	feld@FreeBSD.org
COMMENT=	A Python interface to Last.fm

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYING

USE_PYTHON=	yes
NO_STAGE=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/pylast.py \
		%%PYTHON_SITELIBDIR%%/pylast.pyc \
		%%PYTHON_SITELIBDIR%%/pylast.pyo

.include <bsd.port.mk>
