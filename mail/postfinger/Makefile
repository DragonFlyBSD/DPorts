# Created by: Andrew J. Caines <A.J.Caines@halplant.com>
# $FreeBSD: mail/postfinger/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	postfinger
PORTVERSION=	1.30
CATEGORIES=	mail
MASTER_SITES=	ftp://ftp.wl0.org/ftp.wl0.org/postfinger/
DISTFILES=	${PORTNAME}-${PORTVERSION} README
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	A.J.Caines@halplant.com
COMMENT=	Postfix Configuration Summary Reporter

EXTRACT_CMD=		${CP}
EXTRACT_BEFORE_ARGS=
EXTRACT_AFTER_ARGS=	${WRKDIR}
NO_BUILD=		yes
WRKSRC=			${WRKDIR}

PLIST_FILES=		bin/postfinger

PORTDOCS=		README

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTNAME} ${PREFIX}/bin/${PORTNAME}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for i in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/$i ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
