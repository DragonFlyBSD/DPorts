# Created by: gahr
# $FreeBSD: mail/mbox2imap/Makefile 327742 2013-09-20 19:59:12Z bapt $

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

NO_STAGE=	yes
post-extract:
	${CP} ${DISTDIR}/${PORTNAME} ${WRKDIR}

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
