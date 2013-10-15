# Created by: Ganael LAPLANCHE <ganael.laplanche@martymac.org>
# $FreeBSD: sysutils/evtviewer/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	evtViewer
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME:tl}/${PORTNAME}-${PORTVERSION} \
		http://contribs.martymac.org/evtViewer/
EXTRACT_SUFX=	.tgz

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	PERL-based Event viewer

LICENSE=	GPLv2

USES=		perl5
NO_BUILD=	yes

PLIST_FILES=	bin/evtViewer

# Just copy the script
NO_STAGE=	yes
do-install:
	${CP} ${WRKSRC}/evtViewer ${PREFIX}/bin

.include <bsd.port.mk>
