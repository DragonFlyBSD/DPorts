# New ports collection makefile for:	py-cyruslib
# Date created:		2006-10-31
# Whom:			Dmitriy Kirhlarov <dimma@higis.ru>
#
# $FreeBSD: ports/mail/py-cyruslib/Makefile,v 1.2 2012/11/17 05:59:12 svnexp Exp $
#

PORTNAME=		cyruslib
PORTVERSION=		0.5
CATEGORIES=		mail net python
MASTER_SITES=		http://oss.netfarm.it/download/
PKGNAMEPREFIX=		${PYTHON_PKGNAMEPREFIX}
DISTNAME=		${PORTNAME}.py
EXTRACT_SUFX=

MAINTAINER=		dimma@higis.ru
COMMENT=		Cyrus imapd library for Python

NO_WRKSUBDIR=		yes
USE_PYTHON=		yes
USE_PYTHON_PREFIX=	yes
BINMODE=		644

PLIST_FILES=		%%PYTHON_SITELIBDIR%%/${DISTNAME}

do-extract:
	${MKDIR} ${WRKDIR}
	${CP} ${DISTDIR}/${DISTNAME} ${WRKDIR}/${DISTNAME}

do-build:

do-install:
	${TEST} -d ${PYTHONPREFIX_SITELIBDIR} || ${MKDIR} ${PYTHONPREFIX_SITELIBDIR}
	${INSTALL_SCRIPT} ${WRKDIR}/${DISTNAME} ${PYTHONPREFIX_SITELIBDIR}/

.include <bsd.port.mk>
