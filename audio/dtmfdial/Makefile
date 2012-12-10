# New ports collection makefile for:	dtmfdial
# Date created:		26 March 2006
# Whom:			David Bushong <david@bushong.net>
#
# $FreeBSD: ports/audio/dtmfdial/Makefile,v 1.3 2012/11/17 05:54:30 svnexp Exp $
#

PORTNAME=	dtmfdial
PORTVERSION=	0.2
CATEGORIES=	audio comms
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	apps/sound/misc
DISTNAME=	dtmf-dial-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Generate DTMF dial tones from the command line

WRKSRC=		${WRKDIR}/dial
MAKE_ARGS=	CFLAGS="${CFLAGS}"
PORTDOCS=	README TODO

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dial ${PREFIX}/bin/dtmfdial
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
