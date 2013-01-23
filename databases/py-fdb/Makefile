# Created by: Jose Jachuf <jjachuf@gmail.com>
# $FreeBSD: ports/databases/py-fdb/Makefile,v 1.3 2012/12/13 07:39:42 svnexp Exp $

PORTNAME=	fdb
PORTVERSION=	0.9.9
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jjachuf@gmail.com
COMMENT=	Firebird RDBMS bindings for Python

LICENSE=	BSD

LIB_DEPENDS=	fbclient:${PORTSDIR}/databases/firebird25-client

USE_PYTHON=	yes
USE_PYDISTUTILS=easy_install

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} >= 320
.include "${FILESDIR}/py3k-fix-pkg-plist.inc"
.endif

post-patch:
	@${ECHO_MSG}
	@${ECHO_MSG} "Please make sure that your firebird-client installation"
	@${ECHO_MSG} "is built with command make -DPACKAGE_BUILDING."
	@${ECHO_MSG} "The build of py-fdb will fail otherwise."
	@${ECHO_MSG}

.include <bsd.port.post.mk>
