# ex:ts=8
# Ports collection makefile for:  nawk
# Date created:			  29 April 1998
# Whom:				  Josh Gilliam <josh@quick.net>
#
# $FreeBSD: ports/lang/nawk/Makefile,v 1.45 2012/11/17 05:58:53 svnexp Exp $
#

PORTNAME=	nawk
PORTVERSION=	20110810
CATEGORIES=	lang
MASTER_SITES=	http://www.cs.princeton.edu/~bwk/btl.mirror/
DISTNAME=	awk
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	ota@j.email.ne.jp
COMMENT=	Brian Kernighan's pattern scanning and processing language

NO_WRKSUBDIR=	yes
MAKEFILE=	makefile
ALL_TARGET=	a.out
MAN1=		nawk.1
CFLAGS+=	-DHAS_ISBLANK
PLIST_FILES=	bin/nawk

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/a.out ${PREFIX}/bin/nawk
	${SED} -e 's|awk|nawk|g' ${WRKSRC}/awk.1 > ${WRKSRC}/nawk.1
	${INSTALL_MAN} ${WRKSRC}/nawk.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
