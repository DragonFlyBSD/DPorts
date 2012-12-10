# New ports collection makefile for:	slump
# Date created:				2006-10-09
# Whom:					alepulver
#
# $FreeBSD: ports/games/slump/Makefile,v 1.3 2012/11/17 05:57:53 svnexp Exp $
#

PORTNAME=	slump
PORTVERSION=	0.003.01
CATEGORIES=	games
MASTER_SITES=	http://www.samiam.org/software/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fork of SLIGE that is optimized for making FreeDoom maps

USE_BZIP2=	yes

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	README

post-patch:
	@${REINPLACE_CMD} -e 's|^FLAGS =|& $${CFLAGS}|' ${WRKSRC}/${MAKEFILE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
