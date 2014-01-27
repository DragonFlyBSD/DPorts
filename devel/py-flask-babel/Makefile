# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: devel/py-flask-babel/Makefile 340894 2014-01-24 13:34:31Z olivierd $

PORTNAME=	Flask-Babel
PORTVERSION=	0.9
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	olivierd@FreeBSD.org
COMMENT=	Adds i18n/l10n support to Flask applications

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0.10:${PORTSDIR}/www/py-flask \
	${PYTHON_PKGNAMEPREFIX}Babel>=1.3:${PORTSDIR}/devel/py-babel \
	${PYTHON_PKGNAMEPREFIX}speaklater>=1.3:${PORTSDIR}/devel/py-speaklater

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
