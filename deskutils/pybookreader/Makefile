# Created by: Valeri Vassiliev
# $FreeBSD: deskutils/pybookreader/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pybookreader
PORTVERSION=	0.5.0
PORTREVISION=	6
CATEGORIES=	deskutils python
MASTER_SITES=	SF/${PORTNAME}/PyBookReader/PyBookReader%2BOrnamentBook-${PORTVERSION}
DISTNAME=	PyBookReader-${PORTVERSION}

MAINTAINER=	ufo@februality.com
COMMENT=	Program for reading e-books

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/libxml2.py:${PORTSDIR}/textproc/py-libxml2

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	PyBookReader
USE_GNOME=	pygtk2

NO_STAGE=	yes
.include <bsd.port.mk>
