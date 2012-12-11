# New ports collection makefile for:	findmaildirs
# Date created:		24 Feb 2012
# Whom:			Dmitry Marakasov <amdmi3@FreeBSD.org>
#
# $FreeBSD: ports/mail/findmaildirs/Makefile,v 1.2 2012/11/17 05:59:03 svnexp Exp $
#

PORTNAME=	findmaildirs
PORTVERSION=	0.1
CATEGORIES=	mail
MASTER_SITES=	http://cloud.github.com/downloads/AMDmi3/findmaildirs/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Simple utility to create list of maildirs for mutt

PLIST_FILES=	bin/${PORTNAME}

PORTDOCS=	README

.if !defined(NOPORTDOCS)
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}/
.endif

.include <bsd.port.mk>
