# Created by: gugabsd <gugabsd@mundounix.com.br>
# $FreeBSD: textproc/py-whoosh/Makefile 327773 2013-09-20 23:17:30Z bapt $

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
