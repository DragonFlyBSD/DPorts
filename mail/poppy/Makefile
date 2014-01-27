# Created by: Kevin Lo <kevlo@FreeBSD.org>
# $FreeBSD: mail/poppy/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	poppy
PORTVERSION=	4.01
CATEGORIES=	mail
MASTER_SITES=	http://www.cnpbagwell.com/

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	A client to perform simple tasks with a POP3/IMAP server

NO_BUILD=	yes

#USE_PERL5=	yes

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/poppy ${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/spamkill ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/poppy.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
