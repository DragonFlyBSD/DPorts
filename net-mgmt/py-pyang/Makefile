# Created by: Bruce Simpson
# $FreeBSD: net-mgmt/py-pyang/Makefile 333924 2013-11-15 20:52:32Z sunpoet $

PORTNAME=	pyang
PORTVERSION=	1.4.1
CATEGORIES=	net-mgmt python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Validator and code generator for YANG (RFC 4741)

LICENSE=	BSD

USE_PYTHON=	yes
USE_PYDISTUTILS=yes

DATADIR=	${PREFIX}/share/yang

post-patch:
	@${REINPLACE_CMD} -e \
		's|share/man|man|' ${WRKSRC}/setup.py

.include <bsd.port.mk>
