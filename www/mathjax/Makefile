# -*- mode: makefile-bsdmake -*-
# New ports collection makefile for:	www/mathjax
# Date created:				7 December 2010
# Whom:					Lukasz Stelmach <lukasz.stelmach@iem.pw.edu.pl>
#
# $FreeBSD: ports/www/mathjax/Makefile,v 1.2 2012/11/17 06:02:39 svnexp Exp $

PORTNAME=	MathJax
PORTVERSION=	2.0
#PORTREVISION=	0
CATEGORIES=	www
MASTER_SITES=	https://nodeload.github.com/mathjax/MathJax/tarball/v${PORTVERSION}-latest?dummy=/

MAINTAINER=	lukasz.stelmach@iem.pw.edu.pl
COMMENT=	A cross-browser JavaScript display engine for mathematics

FETCH_BEFORE_ARGS=	-o ${DISTNAME}${EXTRACT_SUFX}

NO_BUILD=	 yes

WRKSRC=	${WRKDIR}/mathjax-MathJax-07669ac

# Changing permissions of 30k files with find -exec (COPYTREE) is way
# too slow.
do-install:
	${MKDIR} ${WWWDIR}
	(cd ${WRKSRC} && \
		${FIND} -d . | ${CPIO} -dumpl ${WWWDIR} >/dev/null 2>&1)
	${FIND} -d ${WWWDIR} -type d -print0 | ${XARGS} -0 ${CHMOD} 755
	${FIND} -d ${WWWDIR} -type f -print0 | ${XARGS} -0 ${CHMOD} ${SHAREMODE}
	${CHOWN} -R ${BINOWN}:${BINGRP} ${WWWDIR}
	@(cd ${PREFIX}; ${FIND} -s ${WWWDIR_REL} -not -type d) >> ${TMPPLIST}
	@(cd ${PREFIX}; ${FIND} -s -d ${WWWDIR_REL} -type d) \
	| ${SED} -ne 's,^,@dirrm ,p' >> ${TMPPLIST}

.include <bsd.port.mk>
