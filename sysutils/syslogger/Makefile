# Created by: Xavier Beaudouin <kiwi@oav.net>
# $FreeBSD: sysutils/syslogger/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	syslogger
PORTVERSION=	1.0
CATEGORIES=	sysutils
MASTER_SITES=	http://oav.net/projects/syslogger/

MAINTAINER=	kiwi@oav.net
COMMENT=	A logger(1) like tool that sends file or pipe througth syslog

WRKSRC=		${WRKDIR}/${PORTNAME}

PLIST_FILES=		bin/syslogger

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/syslogger ${PREFIX}/bin

.include <bsd.port.mk>
