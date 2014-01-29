# Created by: Peter Haight <peterh@sapros.com>
# $FreeBSD: net-im/fugu/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	fugu
PORTVERSION=	1.2.3
CATEGORIES=	net-im python
MASTER_SITES=	http://fugu.gale.org/dist/

MAINTAINER=	5u623l20@gmail.com
COMMENT=	A graphical client for the Gale instant messaging system

RUN_DEPENDS+=	${PYTHON_SITELIBDIR}/Pmw:${PORTSDIR}/x11-toolkits/py-Pmw

USE_OPENSSL=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
