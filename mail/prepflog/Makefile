# New ports collection makefile for:   prepflog
# Date created:        14 January 2008
# Whom:                Terry Sposato
#
# $FreeBSD: ports/mail/prepflog/Makefile,v 1.3 2012/11/17 05:59:11 svnexp Exp $
#

PORTNAME=	prepflog
PORTVERSION=	0.4
CATEGORIES=	mail
MASTER_SITES=	http://www.gufonero.com/postfix/
EXTRACT_SUFX=	.tgz

MAINTAINER=	tabmow@freenode.net
COMMENT=	Prepares logfiles in a sanitised format for pflogsumm and awstats

PLIST_FILES=	bin/prepflog

NO_BUILD=	yes
USE_PERL5=	yes

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
