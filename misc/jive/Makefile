# Created by: David O'Brien (obrien@NUXI.com)
# $FreeBSD: misc/jive/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	jive
PORTVERSION=	1.1
CATEGORIES=	misc
MASTER_SITES=	${MASTER_SITE_LOCAL} \
		ftp://nuxi.ucdavis.edu/pub/misc/
MASTER_SITE_SUBDIR=	obrien

MAINTAINER=	obrien@FreeBSD.org
COMMENT=	Filter that converts English text to Jive

CONFLICTS=	filters-* talkfilters-*

WRKSRC=		${WRKDIR}/jive
MAN1=		jive.1

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/jive ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${MAN1} ${PREFIX}/man/man1

.include <bsd.port.mk>
