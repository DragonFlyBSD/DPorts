# Created by: Leland Wang <llwang@infor.org>
# $FreeBSD: games/py-sgfsummary/Makefile 327730 2013-09-20 17:36:33Z bapt $

PORTNAME=	sgfsummary
PORTVERSION=	1.0
CATEGORIES=	games python
MASTER_SITES=	http://gotools.sourceforge.net/sgfsummary/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.tgz

MAINTAINER=	llwang@infor.org
COMMENT=	SGF Summarizer

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/sgflib.py:${PORTSDIR}/games/py-sgflib

PLIST_FILES=	bin/sgfsummary.py
USE_PYTHON=	yes
NO_BUILD=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}${PORTVERSION}

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/sgfsummary.py ${PREFIX}/bin

.include <bsd.port.mk>
