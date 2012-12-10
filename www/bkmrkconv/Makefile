# New ports collection makefile for:	bkmrkconv
# Date created:		18 Dec 1999
# Whom:			Will Andrews <andrews@technologist.com>
#
# $FreeBSD: ports/www/bkmrkconv/Makefile,v 1.16 2012/11/17 06:02:29 svnexp Exp $
#

PORTNAME=	bkmrkconv
PORTVERSION=	1.12
CATEGORIES=	www
MASTER_SITES=	http://www.bleb.org/software/bkmrkconv/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Netscape bookmarks.html converter

USE_PERL5=	yes
NO_BUILD=	yes

post-patch:
	@${FIND} ${WRKSRC} -name '*.pl' | ${XARGS} ${PERL} -pi -e \
		's|/usr/bin/perl|${PERL}|g ; \
		 s|%%PREFIX%%|${PREFIX}|g'

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/bkmrkconv.pl ${PREFIX}/bin/bkmrkconv
	@${MKDIR} ${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/utils/* ${DATADIR}
	@${MKDIR} ${DATADIR}/src
	${INSTALL_DATA} ${WRKSRC}/src.example/* ${DATADIR}/src
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.txt ${DOCSDIR}
.endif

.include <bsd.port.mk>
