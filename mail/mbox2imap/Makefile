# New ports collection Makefile for:	mbox2imap
# Date created:				25 September 2008
# Whom:					gahr
#
# $FreeBSD: ports/mail/mbox2imap/Makefile,v 1.2 2012/11/17 05:59:05 svnexp Exp $
#

PORTNAME=	mbox2imap
PORTVERSION=	1.0
CATEGORIES=	mail
MASTER_SITES=	http://people.cs.uchicago.edu/~brendan/scripts/ \
		http://people.freebsd.org/~gahr/distfiles/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	# none
EXTRACT_ONLY=	# none

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Upload email stored in mbox file format to an IMAP server

USE_PYTHON=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}

post-extract:
	${CP} ${DISTDIR}/${PORTNAME} ${WRKDIR}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
