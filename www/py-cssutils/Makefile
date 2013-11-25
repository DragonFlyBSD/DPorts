# Created by: ijliao
# $FreeBSD: www/py-cssutils/Makefile 334775 2013-11-24 19:29:48Z sunpoet $

PORTNAME=	cssutils
PORTVERSION=	0.9.10
PORTEPOCH=	1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	CSS Cascading Style Sheets library for Python

LICENSE=	LGPL3

OPTIONS_DEFINE=	EXAMPLES
OPTIONSFILE=	${PORT_DBDIR}/py-${PORTNAME}/options

USE_PYDISTUTILS=easy_install
USE_PYTHON=	yes
USE_ZIP=	yes

EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}/

.include <bsd.port.mk>
