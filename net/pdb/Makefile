# Created by: gnn
# $FreeBSD: net/pdb/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pdb
PORTVERSION=	0.1
CATEGORIES=	net
MASTER_SITES=	SF/pktdbg/pktdbg/${PORTVERSION}%20Beta
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	gnn@FreeBSD.org
COMMENT=	Packet Debugger

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/pcs/__init__.py:${PORTSDIR}/net/py-pcs

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
USE_PYTHON_PREFIX=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
