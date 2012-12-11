# ex:ts=8
# New ports collection makefile for:	flawfinder
# Date created:			Jul 23, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/security/flawfinder/Makefile,v 1.16 2012/11/17 06:01:03 svnexp Exp $
#

PORTNAME=	flawfinder
PORTVERSION=	1.27
CATEGORIES=	security devel
MASTER_SITES=	http://www.dwheeler.com/flawfinder/ \
		${MASTER_SITE_PACKETSTORM}
MASTER_SITE_SUBDIR=	UNIX/security

MAINTAINER=	lx@FreeBSD.org
COMMENT=	Examines source code looking for security weaknesses

USE_PYTHON=	yes
NO_BUILD=	yes

MAN1=		flawfinder.1
DOCS=		ChangeLog README flawfinder.pdf flawfinder.ps
EXAMPLES=	test.c correct-results.html correct-results.txt

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/flawfinder ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/flawfinder.1 ${MANPREFIX}/man/man1
	@${MKDIR} ${EXAMPLESDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${EXAMPLES} ${EXAMPLESDIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
