# New ports collection makefile for:	ifile
# Date created:         29 Jan 2002
# Whom:                 David Bushong <david+ports@bushong.net>
#
# $FreeBSD: ports/mail/ifile/Makefile,v 1.22 2012/11/17 05:59:04 svnexp Exp $
#

PORTNAME=	ifile
PORTVERSION=	1.3.8
CATEGORIES=	mail textproc
MASTER_SITES=	http://people.csail.mit.edu/jrennie/ifile/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An application of machine learning to e-mail filtering

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_CSTD=	gnu89

MAN1=		ifile.1
PLIST_FILES=	bin/ifile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ifile ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/ifile.1 ${MANPREFIX}/man/man1

.include <bsd.port.mk>
