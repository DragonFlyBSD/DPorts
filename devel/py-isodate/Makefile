# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/py-isodate/Makefile 337623 2013-12-26 21:53:15Z sunpoet $

PORTNAME=	isodate
PORTVERSION=	0.4.9
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	ISO 8601 date/time/duration parser and formater

LICENSE=	BSD3CLAUSE

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|setuptools|do_not_use_&|' ${WRKSRC}/${PYSETUP}

.include <bsd.port.mk>
