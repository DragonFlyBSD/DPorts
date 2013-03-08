# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: ports/databases/openark-kit/Makefile,v 1.4 2013/02/08 12:33:07 svnexp Exp $

PORTNAME=	openark-kit
PORTVERSION=	180
CATEGORIES=	databases
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	gslin@gslin.org
COMMENT=	Common utilities for MySQL

LICENSE=	BSD

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}MySQLdb>=1.2.2:${PORTSDIR}/databases/py-MySQLdb

PROJECTHOST=	openarkkit
USE_PYDISTUTILS=	yes
USE_PYTHON=	yes

.include <bsd.port.mk>
