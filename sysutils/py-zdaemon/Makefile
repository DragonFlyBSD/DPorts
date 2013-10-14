# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: sysutils/py-zdaemon/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	zdaemon
PORTVERSION=	2.0.7
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	zope@FreeBSD.org
COMMENT=	Daemon Process Control Library and Tools for Unix-bases Systems

LICENSE=	ZPL21

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}zconfig>0:${PORTSDIR}/devel/py-zconfig

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.mk>
