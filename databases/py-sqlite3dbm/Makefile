# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: databases/py-sqlite3dbm/Makefile 313402 2013-03-04 10:55:23Z lwhsu $

PORTNAME=	sqlite3dbm
PORTVERSION=	0.1.4
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Sqlite-backed dictionary

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlite3>0:${PORTSDIR}/databases/py-sqlite3
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlite3>0:${PORTSDIR}/databases/py-sqlite3

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

USE_PYTHON=	2.6+
USE_PYDISTUTILS=easy_install

.include <bsd.port.mk>
