# Created by: Kevin Lo <kevlo@FreeBSD.org>
# $FreeBSD: textproc/chm2pdf/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	chm2pdf
PORTVERSION=	0.9.1
PORTREVISION=	3
CATEGORIES=	textproc python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	A Python script that converts CHM files into PDF files

RUN_DEPENDS=	htmldoc:${PORTSDIR}/textproc/htmldoc \
		${PYTHON_SITELIBDIR}/chm/chm.py:${PORTSDIR}/textproc/pychm

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGVERSION=	0.9

PLIST_FILES=	bin/chm2pdf

NO_STAGE=	yes
.include <bsd.port.mk>
