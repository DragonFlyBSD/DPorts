# Created by: ijliao
# $FreeBSD: print/pfbtopfa/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pfbtopfa
PORTVERSION=	1.0
CATEGORIES=	print
MASTER_SITES=	http://www.whizkidtech.redprince.net/pfbtopfa/ \
		ftp://ftp.whizkidtech.redprince.net/fonts/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert PFB files to the PFA format

MAN1=		pfbtopfa.1
PLIST_FILES=	bin/pfbtopfa

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/pfbtopfa ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/pfbtopfa.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
