# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: www/py-restclient/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	restclient
PORTVERSION=	0.11.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Convenient library for writing REST clients

LICENSE=	BSD

RUN_DEPENDS=	${PKGNAMEPREFIX}httplib2>=0:${PORTSDIR}/www/py-httplib2

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e 's,install_requires.*,,' ${WRKSRC}/setup.py

.include <bsd.port.mk>
