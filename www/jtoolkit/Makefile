# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: www/jtoolkit/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	jToolkit
PORTVERSION=	0.7.8
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Webapp framework with modpython-based and stand-alone modes

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}kid>=0.9.5:${PORTSDIR}/devel/py-kid
# Has optional dependencies on database engines
# Can optionally use py-lucene (on i386)

USE_PYTHON=	2
USE_PYDISTUTILS=yes
PYSETUP=	${PORTNAME}Setup.py

NO_STAGE=	yes
.include <bsd.port.mk>
