# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-jsonlib2/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	jsonlib2
PORTVERSION=	1.5.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	JSON Serializer/Deserializer for Python

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install
PYEASYINSTALL_ARCHDEP=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

NO_STAGE=	yes
.include <bsd.port.mk>
