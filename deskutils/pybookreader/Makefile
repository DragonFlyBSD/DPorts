# Created by: Valeri Vassiliev
# $FreeBSD: deskutils/pybookreader/Makefile 327718 2013-09-20 16:21:37Z bapt $

PORTNAME=	pybookreader
PORTVERSION=	0.5.0
PORTREVISION=	6
CATEGORIES=	deskutils python
MASTER_SITES=	SF/${PORTNAME}/PyBookReader/PyBookReader%2BOrnamentBook-${PORTVERSION}
DISTNAME=	PyBookReader-${PORTVERSION}

MAINTAINER=	ufo@februality.com
COMMENT=	Program for reading e-books

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/libxml2.py:${PORTSDIR}/textproc/py-libxml2

USE_PYTHON=	2.2+
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	PyBookReader
USE_GNOME=	pygtk2

NO_STAGE=	yes
.include <bsd.port.mk>
