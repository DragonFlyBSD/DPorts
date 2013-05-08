# Created by: Cheng-Lung Sung <clsung@FreeBSD.org>
# $FreeBSD: databases/py-redis/Makefile 316756 2013-04-28 21:57:02Z koobs $

PORTNAME=	redis
PORTVERSION=	2.7.4
CATEGORIES=	databases python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Python client for Redis key-value store

LICENSE=	MIT

USE_GITHUB=		yes
GH_ACCOUNT=		andymccurdy
GH_PROJECT=		${PORTNAME}-py
GH_COMMIT=		b5ccc73

USE_PYTHON=		yes
USE_PYDISTUTILS=	easy_install

OPTIONS_DEFINE=		HIREDIS
HIREDIS_DESC=		Add py-hiredis C extension support
OPTIONSFILE?=		${PORT_DBDIR}/py-${PORTNAME}/options

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MHIREDIS}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}hiredis>0:${PORTSDIR}/databases/py-hiredis
.endif

regression-test: build
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test

.include <bsd.port.mk>
