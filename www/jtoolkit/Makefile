# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: www/jtoolkit/Makefile 327776 2013-09-20 23:36:50Z bapt $

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

USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes
PYSETUP=	${PORTNAME}Setup.py

NO_STAGE=	yes
.include <bsd.port.mk>
