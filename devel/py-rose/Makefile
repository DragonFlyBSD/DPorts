# Created by: William Grzybowski <william88@gmail.com>
# $FreeBSD: devel/py-rose/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	rose
PORTVERSION=	1.0.0
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	A small library for keeping your version up-to-date easily everywhere

LICENSE=	BSD

USE_PYTHON=	2.6+
USE_PYDISTUTILS=	easy_install

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

NO_STAGE=	yes
.include <bsd.port.mk>
