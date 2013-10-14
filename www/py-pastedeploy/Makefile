# Created by: Dryice Liu	<dryice@dryice.name>
# $FreeBSD: www/py-pastedeploy/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	PasteDeploy
PORTVERSION=	1.5.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wenheping@gmail.com
COMMENT=	Load, configure, and compose WSGI applications and servers

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Paste>=1.6:${PORTSDIR}/www/py-paste
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	2.5+
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_NOEGGINFO=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
