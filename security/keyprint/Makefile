# Created by: mharo@FreeBSD.org
# $FreeBSD: security/keyprint/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	keyprint
PORTVERSION=	1.0
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	mharo

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Print S/Key keys on a piece of paper, twice the size of a credit card

NO_BUILD=	yes

PORTDOCS=	README

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e 's,__PREFIX__,${PREFIX},' ${WRKSRC}/keyprint

do-install:
	${MKDIR} ${PREFIX}/share/keyprint
	${INSTALL_DATA} ${WRKSRC}/keyblank.ps ${PREFIX}/share/keyprint
	${INSTALL_SCRIPT} ${WRKSRC}/keyprint ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
