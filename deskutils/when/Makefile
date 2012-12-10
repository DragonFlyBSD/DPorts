# New ports collection makefile for:	when
# Date created:		1 May 2006
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/deskutils/when/Makefile,v 1.18 2012/11/17 05:55:31 svnexp Exp $
#

PORTNAME=	when
PORTVERSION=	1.1.22
CATEGORIES=	deskutils
MASTER_SITES=	LOCAL/culot

MAINTAINER=	culot@FreeBSD.org
COMMENT=	A very simple personal calendar

USE_PERL5_RUN=	yes
NO_BUILD=	yes
PLIST_FILES=	bin/${PORTNAME}
MAN1=		${PORTNAME}.1

WRKSRC=		${WRKDIR}/${PORTNAME}_dist

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	@${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${MAN1PREFIX}/man/man1/

.include <bsd.port.mk>
