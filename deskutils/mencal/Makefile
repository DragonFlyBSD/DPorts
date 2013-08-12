# New ports collection makefile for:    mencal
# Date created:                 17 April 2002
# Whom:                         Christian Brueffer <chris@unixpages.org>
#
# $FreeBSD: deskutils/mencal/Makefile 324191 2013-08-03 13:44:00Z mat $
#

PORTNAME=	mencal
PORTVERSION=	2.4
CATEGORIES=	deskutils
MASTER_SITES=	http://kyberdigi.cz/projects/mencal/files/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A variation of the unix command cal

LICENSE=	GPLv2

NO_BUILD=	yes

USES=		perl5
USE_PERL5=	run

PLIST_FILES=	bin/mencal

post-patch:
	@${REINPLACE_CMD} -e '/^#!/s|/.*|${PERL} -w|' ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/mencal ${PREFIX}/bin

.include <bsd.port.mk>
