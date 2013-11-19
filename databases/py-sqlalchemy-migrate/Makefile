# Created by: elvstone@gmail.com
# $FreeBSD: databases/py-sqlalchemy-migrate/Makefile 334228 2013-11-18 17:02:06Z lwhsu $

PORTNAME=	sqlalchemy-migrate
PORTVERSION=	0.7.2
CATEGORIES=	databases python
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Database schema migrations for SQLAlchemy

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlalchemy>=0.7:${PORTSDIR}/databases/py-sqlalchemy \
		${PYTHON_PKGNAMEPREFIX}Tempita>0:${PORTSDIR}/textproc/py-Tempita \
		${PYTHON_PKGNAMEPREFIX}decorator>0:${PORTSDIR}/devel/py-decorator

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes
PYDISTUTILS_PKGNAME=	sqlalchemy_migrate

.include <bsd.port.mk>
