# Created by: <spam@rm-rf.kiev.ua>
# $FreeBSD: www/googlebook_dl/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	googlebook_dl
PORTVERSION=	20100502
CATEGORIES=	www
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ak@FreeBSD.org
COMMENT=	A command-line utility for downloading books from Google Books

RUN_DEPENDS=	wget:${PORTSDIR}/ftp/wget

NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${FILESDIR}/${PORTNAME}.sh ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
