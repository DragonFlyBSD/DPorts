# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: databases/py-flask-sqlalchemy/Makefile 340894 2014-01-24 13:34:31Z olivierd $

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

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
