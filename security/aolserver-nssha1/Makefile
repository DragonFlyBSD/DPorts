# New ports collection makefile for:	aolserver-nssha1
# Date created:		12 Oct 2006
# Whom:			Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/security/aolserver-nssha1/Makefile,v 1.7 2012/11/17 06:01:00 svnexp Exp $
#

PORTNAME=	aolserver-nssha1
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	security www
MASTER_SITES=	SF/aolserver/nssha1/nssha1-${PORTVERSION}
DISTFILES=	nssha1-${PORTVERSION}.tar.gz
DIST_SUBDIR=	aolserver

MAINTAINER=	ports@FreeBSD.org
COMMENT=	AOLserver module to perform SHA1 hashes

WRKSRC=		${WRKDIR}/nssha1-${PORTVERSION}

LICENSE=	GPLv1 MPL
LICENSE_COMB=	dual

AOLSERVERBASE?=	aolserver
BUILD_DEPENDS+=	${LOCALBASE}/${AOLSERVERBASE}/bin/nsd:${PORTSDIR}/www/aolserver
RUN_DEPENDS+=	${LOCALBASE}/${AOLSERVERBASE}/bin/nsd:${PORTSDIR}/www/aolserver
PLIST_SUB+=	AOLSERVERBASE=${AOLSERVERBASE}

USE_GMAKE=	yes

MAKE_ARGS=	AOLSERVER=${LOCALBASE}/${AOLSERVERBASE} OPENSSL=${OPENSSLBASE}

.if !defined(NOPORTDOCS)
PORTDOCS=	ChangeLog
.endif

post-patch:
	@ ${REINPLACE_CMD} -e 's|OBJS|MODOBJS|' ${WRKSRC}/Makefile

post-install:
.if !defined(NOPORTDOCS)
	@ ${MKDIR} ${DOCSDIR}
.for FILE in ${PORTDOCS}
	@ ${INSTALL_DATA} ${WRKSRC}/${FILE} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
