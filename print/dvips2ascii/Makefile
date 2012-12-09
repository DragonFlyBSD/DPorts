# New ports collection makefile for:    dvips2ascii
# Date created:         7 Aug 1997
# Whom:                 eserte@cs.tu-berlin.de
#
# $FreeBSD: ports/print/dvips2ascii/Makefile,v 1.12 2012/11/17 06:00:49 svnexp Exp $
#

PORTNAME=	dvips2ascii
PORTVERSION=	1.3
CATEGORIES=	print
MASTER_SITES=	SF/srezic/${PORTNAME}/${PORTVERSION}

MAINTAINER=	slaven@rezic.de
COMMENT=	PostScript (created by dvips) to ASCII converter

PLIST_FILES=	bin/dvips2ascii

do-build:
	${MV} ${WRKSRC}/dvips2ascii ${WRKSRC}/dvips2ascii.orig
	${SED} -e 's;#!.*perl;#!${PERL};' \
	    < ${WRKSRC}/dvips2ascii.orig > ${WRKSRC}/dvips2ascii

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/dvips2ascii ${PREFIX}/bin

.include <bsd.port.mk>
