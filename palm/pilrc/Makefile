# New ports collection makefile for:	PilRC
# Date created:		29 Mar 2000
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/palm/pilrc/Makefile,v 1.24 2012/11/17 06:00:44 svnexp Exp $
#

PORTNAME=	pilrc
PORTVERSION=	3.2
PORTREVISION=	3
CATEGORIES=	palm
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Resource compiler for Pilot applications

WRKSRC=		${WRKDIR}/pilrc-${PORTVERSION}/unix
CONFIGURE_ARGS+=	--enable-pilrcui

USE_GNOME=	gtk12
GNU_CONFIGURE=	yes

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pilrc ${WRKSRC}/pilrcui ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${CP} -R ${WRKSRC}/../doc/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
