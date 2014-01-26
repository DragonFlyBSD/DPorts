# Created by: ajk@waterspout.com
# $FreeBSD: devel/msrc0/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	msrc0
PORTVERSION=	0.7
CATEGORIES=	devel
MASTER_SITES=	ftp://ftp.physics.purdue.edu/pub/pundits/ \
		http://www.komquats.com/distfiles/ \
		http://people.freebsd.org/~cy/distfiles/

EXTRACT_SUFX=	.tgz

MAINTAINER=	cy@FreeBSD.org
COMMENT=	Meta source fake-out script for building ksb tools

NO_BUILD=	yes
PLIST_FILES=	bin/makeme
WRKSRC=		${WRKDIR}/${PORTNAME}-0.6

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/makeme ${PREFIX}/bin

.include <bsd.port.mk>
