# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: devel/py-binplist/Makefile 325264 2013-08-23 13:39:54Z antoine $

PORTNAME=	binplist
PORTVERSION=	0.1.4
CATEGORIES=	devel python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Binary plist parser

LICENSE=	AL2

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>=0:${PORTSDIR}/devel/py-pytz

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

PLIST_FILES=	bin/plist.py \
		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

.include <bsd.port.mk>
