# Created by: Lasse L. Johnsen (lasse@freebsdcluster.org)
# $FreeBSD: mail/sortmail/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	sortmail
PORTVERSION=	1.20
CATEGORIES=	mail
MASTER_SITES=	http://www.freebsdcluster.org/~lasse/software/

MAINTAINER=	lasse@freebsdcluster.org
COMMENT=	Useful tool for sorting mbox style mailboxes after date

NO_WRKSUBDIR=	yes
MAN1=		recomposemail.1 decomposemail.1 sortmail.1
NO_BUILD=	yes

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/recomposemail ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/decomposemail ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/sortmail ${PREFIX}/bin

	${INSTALL_MAN} ${WRKSRC}/recomposemail.1 ${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/decomposemail.1 ${PREFIX}/man/man1
	${INSTALL_MAN} ${WRKSRC}/sortmail.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
