# New ports collection makefile for:   decss
# Date Created:			20 Feb 2000
# Whom:				Kris Kennaway <kris@FreeBSD.org>
#
# $FreeBSD: ports/www/decss/Makefile,v 1.10 2012/11/17 06:02:30 svnexp Exp $
#

PORTNAME=	decss
PORTVERSION=	1.0
CATEGORIES=	www perl5
MASTER_SITES=	http://www.pigdog.org/decss/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Strip cascading style sheets from webpages

WRKSRC=		${WRKDIR}/source

NO_BUILD=	YES
USE_PERL5=	YES

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/DeCSS ${PREFIX}/bin/decss
	${MKDIR} ${PREFIX}/share/doc/decss
.for i in FAQ README decss-now.png decss_mirror.html original_pigdog_article.txt
	${INSTALL_DATA} ${WRKSRC}/${i} ${PREFIX}/share/doc/decss
.endfor

.include <bsd.port.mk>
