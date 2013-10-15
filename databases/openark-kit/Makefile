# $FreeBSD: databases/openark-kit/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	openark-kit
PORTVERSION=	196
CATEGORIES=	databases
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	gslin@gslin.org
COMMENT=	Common utilities for MySQL

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}MySQLdb>=1.2.2:${PORTSDIR}/databases/py-MySQLdb

PROJECTHOST=	openarkkit
USE_PYDISTUTILS=	yes
USE_PYTHON=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
