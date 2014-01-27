# Created by: gugabsd <gugabsd@mundounix.com.br>
# $FreeBSD: textproc/py-whoosh/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	whoosh
PORTVERSION=	2.4.1
CATEGORIES=	textproc www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Whoosh-${PORTVERSION}

MAINTAINER=	gugabsd@mundounix.com.br
COMMENT=	Featureful full-text indexing and searching in Python

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	Whoosh

NO_STAGE=	yes
.include <bsd.port.mk>
