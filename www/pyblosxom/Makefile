# Created by: Dryice Liu <dryice@liu.com.cn>
# $FreeBSD: www/pyblosxom/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pyblosxom
DISTVERSION=	1.5.3
CATEGORIES=	www python
MASTER_SITES=	http://pyblosxom.github.io/download/

MAINTAINER=	jun-g@daemonfreaks.com
COMMENT=	A lightweight weblog system

LICENSE=	MIT

USE_PYTHON=	2
USE_PYDISTUTILS=	easy_install

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} \. ${DOCSDIR}
.endif

.include <bsd.port.mk>
