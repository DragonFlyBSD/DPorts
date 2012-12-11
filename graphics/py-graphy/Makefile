# New ports collection makefile for:	py-graphy
# Date created:				2010-06-01
# Whom:					Sahil Tandon <sahil@FreeBSD.org>
#
# $FreeBSD: ports/graphics/py-graphy/Makefile,v 1.2 2012/11/17 05:58:20 svnexp Exp $
#

PORTNAME=	graphy
PORTVERSION=	1.0
CATEGORIES=	graphics python
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	sahil@FreeBSD.org
COMMENT=	A simple chart library for Python

USE_BZIP2=	yes
USE_PYTHON_RUN=	yes

PORTDOCS=	README
PORTEXAMPLES=	*

NO_BUILD=	yes
NO_INSTALL_MANPAGES=	yes

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|python2.4|${PYTHON_VERSION}|' \
		${WRKSRC}/examples/*.py \
		${WRKSRC}/${PORTNAME}/*.py
	@${FIND} ${WRKSRC} -name '.svn' -or -name '*.bak' | \
		${XARGS} ${RM} -rf

do-install:
	@${MKDIR} ${PYTHON_SITELIBDIR}/${PORTNAME}
	@(cd ${WRKSRC}/${PORTNAME}/ && \
	     ${COPYTREE_SHARE} \* ${PYTHON_SITELIBDIR}/${PORTNAME})
.if !defined(NOPORTDOCS)
	@${INSTALL} -o ${DOCOWN} -g ${DOCGRP} -m 555 -d ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif
.if !defined(NOPORTEXAMPLES)
	@${INSTALL} -o ${SHAREOWN} -g ${SHAREGRP} -m 555 -d ${EXAMPLESDIR}
	@(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} \* ${EXAMPLESDIR})
.endif

.include <bsd.port.post.mk>
