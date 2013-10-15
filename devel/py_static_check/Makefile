# Created by: Jui-Nan Lin <jnlin@csie.nctu.edu.tw>
# $FreeBSD: devel/py_static_check/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	py_static_check
PORTVERSION=	1.2
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_CHEESESHOP}
MASTER_SITE_SUBDIR=	source/p/py_static_check

MAINTAINER=	jnlin@csie.nctu.edu.tw
COMMENT=	Statically check your python code

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyflakes>=0.5:${PORTSDIR}/devel/py-pyflakes

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
