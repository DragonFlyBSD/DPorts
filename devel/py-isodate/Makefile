# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/py-isodate/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	isodate
PORTVERSION=	0.4.9
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	ISO 8601 date/time/duration parser and formater

USE_PYTHON=	yes
USE_PYDISTUTILS=yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|setuptools|do_not_use_&|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
