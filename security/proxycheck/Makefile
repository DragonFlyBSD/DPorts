# Created by: Paul Chvostek <paul@it.ca>
# $FreeBSD: security/proxycheck/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	proxycheck
PORTVERSION=	0.49a
CATEGORIES=	security
MASTER_SITES=	http://www.corpit.ru/mjt/proxycheck/ \
		http://www.it.ca/~paul/src/

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Check for open proxy servers

PORTSCOUT=	skipv:0.49

MAN1=		proxycheck.1

HAS_CONFIGURE=	yes

NO_STAGE=	yes
do-install:
		@${INSTALL_PROGRAM} ${WRKSRC}/proxycheck ${PREFIX}/sbin/
		@${INSTALL_MAN} ${WRKSRC}/proxycheck.1 ${PREFIX}/man/man1/
.if !defined(NOPORTDOCS)
		@${MKDIR} ${DOCSDIR}
		@${INSTALL_DATA} ${WRKSRC}/CHANGES ${DOCSDIR}
.endif

.include <bsd.port.mk>
