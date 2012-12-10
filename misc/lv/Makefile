# New ports collection makefile for:    lv
# Date created:         Fri Nov  6 09:06:33 PST 1998
# Whom:                 sumikawa@FreeBSD.org
#
# $FreeBSD: ports/misc/lv/Makefile,v 1.19 2012/11/17 05:59:41 svnexp Exp $
#

PORTNAME=	lv
PORTVERSION=	4.51
PORTREVISION=	3
CATEGORIES=	misc
MASTER_SITES=	http://www.ff.iij4u.or.jp/~nrt/freeware/
DISTNAME=	lv451

MAINTAINER=	sumikawa@FreeBSD.org
COMMENT=	Powerful Multilingual File Viewer

WRKSRC=		${WRKDIR}/${DISTNAME}/src
GNU_CONFIGURE=	yes

MAN1=		lv.1

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	(cd ${WRKDIR}/${DISTNAME}; \
	${INSTALL_DATA} *.html hello.sample* ${DOCSDIR})
.endif

.include <bsd.port.mk>
