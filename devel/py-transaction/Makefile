# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/py-transaction/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	transaction
PORTVERSION=	1.4.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Transaction management for Python

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zope.interface>=3.5.2:${PORTSDIR}/devel/py-zope.interface
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
USE_ZIP=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
