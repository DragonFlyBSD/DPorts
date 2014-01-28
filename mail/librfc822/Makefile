# Created by: ijliao
# $FreeBSD: mail/librfc822/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	librfc822
PORTVERSION=	1.2
CATEGORIES=	mail devel
MASTER_SITES=	http://cryp.to/librfc2822/

MAINTAINER=	ismail@EnderUNIX.org
COMMENT=	A complete parser for RFC822 addresses

GNU_CONFIGURE=	YES

PORTDOCS=	user-manual.html
PLIST_FILES=	include/rfc822.hpp lib/librfc822.a

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${WRKSRC}/rfc822.hpp ${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/librfc822.a ${PREFIX}/lib
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
