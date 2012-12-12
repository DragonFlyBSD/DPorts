# Created by: Pete Fritchman <petef@databits.net>
# $FreeBSD: ports/security/ssh-multiadd/Makefile,v 1.14 2012/11/17 06:01:20 svnexp Exp $

PORTNAME=	ssh-multiadd
PORTVERSION=	1.3.2
CATEGORIES=	security
MASTER_SITES=	SUNSITE/system/network/telnet

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to add multiple ssh keys to the authentication agent

USE_PYTHON_RUN=	yes
NO_BUILD=	yes
MAN1=		ssh-multiadd.1
PLIST_FILES=	bin/ssh-multiadd

post-patch:
	@${REINPLACE_CMD} -e \
		's|/usr/bin/python2|${PYTHON_CMD}| ; \
		s|#break|break|' ${WRKSRC}/ssh-multiadd

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/ssh-multiadd ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/ssh-multiadd.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
