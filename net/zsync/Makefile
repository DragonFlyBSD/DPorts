# Created by: Gea-Suan Lin <gslin@ccca.nctu.edu.tw>
# $FreeBSD: net/zsync/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	zsync
PORTVERSION=	0.6.2
CATEGORIES=	net
MASTER_SITES=	http://zsync.moria.org.uk/download/

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	A file transfer program

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
PLIST_FILES=	bin/zsync \
		bin/zsyncmake
BINS=		zsync zsyncmake
PORTDOCS=	COPYING INSTALL NEWS README
MAN1=		zsync.1 \
		zsyncmake.1

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${BINS:S,^,${WRKSRC}/,} ${PREFIX}/bin
	${INSTALL_MAN} ${MAN1:S,^,${WRKSRC}/doc/,} ${MAN1PREFIX}/man/man1
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

.include <bsd.port.mk>
