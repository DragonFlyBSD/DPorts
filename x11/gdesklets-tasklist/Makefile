# New ports collection makefile for:    gdesklets-tasklist
# Date created:                		04 January 2004
# Whom:                    		Vincent Tantardini <vinc@FreeBSD-fr.org>
#
# $FreeBSD: ports/x11/gdesklets-tasklist/Makefile,v 1.16 2012/11/17 06:03:15 svnexp Exp $
#

PORTNAME=	tasklist
PORTVERSION=	0.10
PORTREVISION=	11
CATEGORIES=	x11 gnome
MASTER_SITES=	http://gdesklets.zencomputer.ca/
PKGNAMEPREFIX=	gdesklets-
DISTNAME=	${PORTNAME}-desklet-${PORTVERSION}

MAINTAINER=	pav@FreeBSD.org
COMMENT=	Displays the GNOME tasklist and floats above the other windows

RUN_DEPENDS=	gdesklets:${PORTSDIR}/deskutils/gdesklets

NAME=		tasklist
DATADIR=	${PREFIX}/share
PKGMESSAGE=	${WRKDIR}/pkg-message
WRKSRC=		${WRKDIR}/${PORTNAME}-desklet-${PORTVERSION}

do-build:
	@${CAT} pkg-message | ${SED} -e 's|%%PREFIX%%|${PREFIX}|g ; s|%%NAME%%|${NAME}|g' > ${PKGMESSAGE}

do-install:
	@${MKDIR} ${DATADIR}/gdesklets/Displays/${NAME}
	@${INSTALL_DATA} ${WRKSRC}/*.display ${DATADIR}/gdesklets/Displays/${NAME}/
	@${INSTALL_DATA} ${WRKSRC}/*.png ${DATADIR}/gdesklets/Displays/${NAME}/
	@${INSTALL_DATA} ${WRKSRC}/README ${DATADIR}/gdesklets/Displays/${NAME}/
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
