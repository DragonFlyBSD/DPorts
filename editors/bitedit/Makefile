# Created by: Michael L. Hostbaek (mich@freebsdcluster.org)
# $FreeBSD: editors/bitedit/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	bitedit
PORTVERSION=	0.9.4
CATEGORIES=	editors
MASTER_SITES=	http://freebsdcluster.org/~mich/software/

MAINTAINER=	mich@FreeBSD.org
COMMENT=	Bitedit is a simple ncurses program for editing a file

MAKE_ARGS=	CFLAGS="${CFLAGS} -DVERSION=\\\"${PORTVERSION}\\\""

DOCSDIR=	${PREFIX}/share/doc/${PORTNAME}

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bitedit ${PREFIX}/bin/
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/bitedit.txt ${DOCSDIR}/bitedit.txt
.endif

.include <bsd.port.mk>
