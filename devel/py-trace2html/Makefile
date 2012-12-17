# Created by: Li-Wen Hsu <lwhsu@lwhsu.org>
# $FreeBSD: ports/devel/py-trace2html/Makefile,v 1.6 2012/11/17 05:56:51 svnexp Exp $

PORTNAME=	trace2html
PORTVERSION=	0.2.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	HTML coverage report generator for trace.py

LICENSE=	GPLv2

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install

PLIST_FILES=	bin/trace2html.py \
		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
