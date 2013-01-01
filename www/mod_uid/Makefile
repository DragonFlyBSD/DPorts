# New ports collection makefile for:    mod_uid
# Date created:				02 December 2003
# Whom:					Yen-Ming Lee <leeym@FreeBSD.org>
#
# $FreeBSD: ports/www/mod_uid/Makefile,v 1.10 2012/11/17 06:02:42 svnexp Exp $
#

PORTNAME=	mod_uid
PORTVERSION=	1.1.0
CATEGORIES=	www
MASTER_SITES=	ftp://ftp.lexa.ru/pub/apache-rus/contrib/

MAINTAINER=	leeym@FreeBSD.org
COMMENT=	A module issuing the "correct" cookies for counting the site visitors

MAKE_JOBS_SAFE=	yes

USE_APACHE=	22

PORTDOCS=	README.html

AP_FAST_BUILD=	yes
AP_GENPLIST=	yes

.include <bsd.port.pre.mk>

.if ${APACHE_VERSION} == 13
MODULENAME=	mod_uid
.else
MODULENAME=	mod_uid2
.endif

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.post.mk>
