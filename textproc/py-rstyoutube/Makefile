# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: textproc/py-rstyoutube/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	rstyoutube
PORTVERSION=	0.1.1
CATEGORIES=	textproc python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	duchateau.olivier@gmail.com
COMMENT=	Embed YouTube videos in reStructuredText documents

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/docutils/__init__.py:${PORTSDIR}/textproc/py-docutils

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
