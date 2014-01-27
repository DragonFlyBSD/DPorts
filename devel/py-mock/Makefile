# Created by: jessekempf@gmail.com
# $FreeBSD: devel/py-mock/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mock
PORTVERSION=	1.0.1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jessekempf@gmail.com
COMMENT=	Mock unit tests for Python

LICENSE=	BSD

OPTIONS_DEFINE=	TESTS
TESTS_DESC=	Install tox for running unit tests
OPTIONSFILE?=	${PORT_DBDIR}/py-${PORTNAME}/options

# Python3 ready
USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MTESTS}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}tox>0:${PORTSDIR}/devel/py-tox
.endif

.if ${PYTHON_REL} >= 320
.include "${PORTSDIR}/devel/py-virtualenv/files/py3k-fix-pkg-plist.inc"
.endif

.include <bsd.port.post.mk>
