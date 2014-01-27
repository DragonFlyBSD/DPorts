# Created by: Philip Paeps <philip@FreeBSD.org>
# $FreeBSD: www/py-recaptcha/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	recaptcha
PORTVERSION=	1.0.6
CATEGORIES=	www devel python
MASTER_SITES=	${MASTER_SITE_CHEESESHOP}
MASTER_SITE_SUBDIR=	source/r/recaptcha-client
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-client-${PORTVERSION}

MAINTAINER=	philip@FreeBSD.org
COMMENT=	A plugin for reCAPTCHA and reCAPTCHA Mailhide

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_PKGNAME=	recaptcha_client
PYDISTUTILS_NOEGGINFO=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/${PYDISTUTILS_PKGNAME}-${PORTVERSION}-py${PYTHON_VER}.egg

NO_STAGE=	yes
.include <bsd.port.mk>
