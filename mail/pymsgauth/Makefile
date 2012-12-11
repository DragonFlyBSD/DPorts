# New ports collection makefile for:	pymsgauth
# Date created:		12 Aug 2002
# Whom:			Sergei Kolobov <sergei@kolobov.com>
#
# $FreeBSD: ports/mail/pymsgauth/Makefile,v 1.10 2012/11/17 05:59:12 svnexp Exp $
#

PORTNAME=	pymsgauth
PORTVERSION=	2.1.0
CATEGORIES=	mail python
MASTER_SITES=	http://pyropus.ca/software/pymsgauth/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Automatically process qsecretary confirmation requests

USE_PYTHON=	yes

SUB_FILES=	pkg-message

DOCS=		BUGS CHANGELOG pymsgauth.txt pymsgauth.html
EXAMPLES=	pymsgauthrc-example

do-build:
	${REINPLACE_CMD} -e 's,#!/usr/bin/python,#!/usr/bin/env python,' \
	 	${WRKSRC}/pymsgauth-*
	${RM} ${WRKSRC}/pymsgauth-*.bak

do-install:
	@${MKDIR} ${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/*.py ${WRKSRC}/pymsgauth-* ${DATADIR}
	${LN} -sf ${DATADIR}/pymsgauth-* ${PREFIX}/bin
	@${MKDIR} ${EXAMPLESDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${EXAMPLES} ${EXAMPLESDIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
