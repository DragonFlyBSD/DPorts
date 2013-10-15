# Created by: koji@jet.es
# $FreeBSD: irc/onis/Makefile 327736 2013-09-20 18:44:49Z bapt $

PORTNAME=	onis
PORTVERSION=	0.8.2
CATEGORIES=	irc
MASTER_SITES=	http://verplant.org/onis/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A script that converts IRC logfiles into an HTML statistics page

USES=		perl5
NO_BUILD=	YES

NO_STAGE=	yes
do-install:
	@if [ ! -d ${DATADIR} ]; then \
		${MKDIR} ${DATADIR}; \
	fi
	${CP} -R ${WRKSRC}/* ${DATADIR}/

.include <bsd.port.mk>
