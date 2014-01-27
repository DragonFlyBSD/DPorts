# Created by: Li-Wen Hsu <lwhsu@lwhsu.org>
# $FreeBSD: devel/py-trace2html/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	trace2html
PORTVERSION=	0.2.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	HTML coverage report generator for trace.py

LICENSE=	GPLv2

USE_PYTHON=	2
USE_PYDISTUTILS=	easy_install

PLIST_FILES=	bin/trace2html.py \
		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

NO_STAGE=	yes
.include <bsd.port.mk>
