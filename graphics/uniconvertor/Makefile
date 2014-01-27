# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: graphics/uniconvertor/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	uniconvertor
PORTVERSION=	1.1.5
CATEGORIES=	graphics python
MASTER_SITES=	GOOGLE_CODE \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Universal vector graphics translator

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/sk1libs/__init__.py:${PORTSDIR}/graphics/sk1libs

USE_PYTHON=	yes
USE_PYDISTUTILS=yes

.include <bsd.port.mk>
