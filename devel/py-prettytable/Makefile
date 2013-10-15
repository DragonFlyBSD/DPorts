# Created by: Roman Bogorodskiy <novel@FreeBSD.org>
# $FreeBSD: devel/py-prettytable/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	prettytable
PORTVERSION=	0.6.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
MASTER_SITE_SUBDIR=source/P/PrettyTable
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Library for displaying tabular data in an ASCII table format

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install
PYDISTUTILS_NOEGGINFO=	yes

PLIST_FILES=	${PYTHONPREFIX_SITELIBDIR:S;${PREFIX}/;;}/${PYEASYINSTALL_EGG}

NO_STAGE=	yes
.include <bsd.port.mk>
