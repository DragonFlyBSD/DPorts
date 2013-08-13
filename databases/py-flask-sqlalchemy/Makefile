# Created by:		Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: databases/py-flask-sqlalchemy/Makefile 323988 2013-07-30 19:46:05Z olivierd $
#

PORTNAME=	Flask-SQLAlchemy
PORTVERSION=	1.0
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Adds SQLAlchemy support to Flask

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0.10:${PORTSDIR}/www/py-flask \
	${PYTHON_PKGNAMEPREFIX}sqlalchemy>=0.7:${PORTSDIR}/databases/py-sqlalchemy

USE_PYTHON=	2.6+
USE_PYDISTUTILS=	easy_install

.include <bsd.port.mk>
