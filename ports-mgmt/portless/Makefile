# Created by: Martin Kammerhofer
# $FreeBSD: ports-mgmt/portless/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	portless
PORTVERSION=	0.2.7
PORTREVISION=	1
CATEGORIES=	ports-mgmt
MASTER_SITES=	# empty
DISTFILES=	# none
EXTRACT_ONLY=	# empty

MAINTAINER=	mkamm@gmx.net
COMMENT=	Quick display of files inside the FreeBSD ports tree

RUN_DEPENDS=	${LOCALBASE}/bin/bash:${PORTSDIR}/shells/bash

MAN1=		portless.1
MANCOMPRESSED=	no

PLIST_FILES=	bin/portless

NO_STAGE=	yes
do-build:
	${SED} -e 's;@BASH@;${LOCALBASE}/bin/bash;g' \
		${FILESDIR}/portless.sh >${WRKDIR}/portless
do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/portless ${PREFIX}/bin
	${INSTALL_MAN} ${FILESDIR}/portless.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
