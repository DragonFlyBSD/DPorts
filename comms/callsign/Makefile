# Created by: Rick Elrod <codeblock@eighthbit.net>
# $FreeBSD: comms/callsign/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	callsign
PORTVERSION=	1.0.2
CATEGORIES=	comms net hamradio
MASTER_SITES=	RF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Amateur radio callsign lookup command

RUN_DEPENDS=	rubygem-callsign>=0:${PORTSDIR}/comms/rubygem-callsign

WRKSRC=		${WRKDIR}
NO_BUILD=	YES
PLIST_FILES=	bin/callsign

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/callsign ${STAGEDIR}${PREFIX}/bin/

.include <bsd.port.mk>
