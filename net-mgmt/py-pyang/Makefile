# Created by: Bruce Simpson
# $FreeBSD: ports/net-mgmt/py-pyang/Makefile,v 1.5 2012/11/27 03:24:28 svnexp Exp $

PORTNAME=	pyang
PORTVERSION=	1.2
CATEGORIES=	net-mgmt python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Validator and code generator for YANG (RFC 4741)

LICENSE=	BSD

USE_PYTHON=	-2.7
USE_PYDISTUTILS=yes

MAKE_ENV+=	YANG_INSTALL=${PREFIX}
MAN1=		pyang.1 yang2dsdl.1

# TODO: Sed YANG_INSTALL into pyang itself.

post-install:
	@${ECHO_MSG}
	@${ECHO_MSG} "Don't forget to set YANG_INSTALL to ${PREFIX} in your environment."
	@${ECHO_MSG}

.include <bsd.port.mk>
