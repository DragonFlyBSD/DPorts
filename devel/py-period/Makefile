# Created by: ijliao
# $FreeBSD: devel/py-period/Makefile 337702 2013-12-27 10:44:56Z wg $

PORTNAME=	period
PORTVERSION=	0.5
CATEGORIES=	devel python
MASTER_SITES=	http://www.biostat.wisc.edu/~annis/creations/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Basic time period checking library

USE_PYTHON=	yes
NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PYTHON_SITELIBDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/period.py ${STAGEDIR}${PYTHON_SITELIBDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for ex in html txt
	${INSTALL_DATA} ${WRKSRC}/period.${ex} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
