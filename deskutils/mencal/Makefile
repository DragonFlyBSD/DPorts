# New ports collection makefile for:    mencal
# Date created:                 17 April 2002
# Whom:                         Christian Brueffer <chris@unixpages.org>
#
# $FreeBSD: ports/deskutils/mencal/Makefile,v 1.9 2012/11/17 05:55:29 svnexp Exp $
#

PORTNAME=	mencal
PORTVERSION=	2.4
CATEGORIES=	deskutils
MASTER_SITES=	http://kyberdigi.cz/projects/mencal/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A variation of the unix command cal

LICENSE=	GPLv2

NO_BUILD=	yes

USE_PERL5_RUN=	yes

PLIST_FILES=	bin/mencal

post-patch:
	@${REINPLACE_CMD} -e '/^#!/s|/.*|${PERL} -w|' ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/mencal ${PREFIX}/bin

.include <bsd.port.mk>
