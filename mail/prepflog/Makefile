# Created by: Terry Sposato
# $FreeBSD: mail/prepflog/Makefile 327742 2013-09-20 19:59:12Z bapt $

PORTNAME=	prepflog
PORTVERSION=	0.4
CATEGORIES=	mail
MASTER_SITES=	http://www.gufonero.com/postfix/
EXTRACT_SUFX=	.tgz

MAINTAINER=	tabmow@freenode.net
COMMENT=	Prepares logfiles in a sanitised format for pflogsumm and awstats

PLIST_FILES=	bin/prepflog

NO_BUILD=	yes
USES=		perl5

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
