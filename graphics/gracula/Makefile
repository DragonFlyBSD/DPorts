# Created by: G. Adam Stanislav <adam@whizkidtech.net>
# $FreeBSD: graphics/gracula/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	gracula
PORTVERSION=	3.0
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	ftp://ftp.whizkidtech.redprince.net/cgi/gcl/ \
		http://www.whizkidtech.redprince.net/gcl/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A Graphic Counter Language compiler/interpreter

SUB_FILES=	pkg-message

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gracula ${PREFIX}/bin
	$(INSTALL_PROGRAM) ${WRKSRC}/sec2000 ${PREFIX}/bin
.if !defined (NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/NNL  ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/README  ${DOCSDIR}
.endif
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
