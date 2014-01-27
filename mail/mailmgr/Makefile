# Created by: Hsin-Hsiung Chang
# $FreeBSD: mail/mailmgr/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mailmgr
PORTVERSION=	1.2.3
CATEGORIES=	mail
MASTER_SITES=	http://sarg.sourceforge.net/

MAINTAINER=	sexbear@tmu.edu.tw
COMMENT=	Sendmail Analysis Report Generator

GNU_CONFIGURE=	yes

SUB_FILES=	pkg-message

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${WRKSRC}/mailmgr.conf ${PREFIX}/etc/mailmgr.conf.default
.if !exists(${PREFIX}/etc/mailmgr.conf)
	${INSTALL_DATA} ${WRKSRC}/mailmgr.conf ${PREFIX}/etc/mailmgr.conf
.endif
	${INSTALL_PROGRAM} ${WRKSRC}/mailmgr ${PREFIX}/bin
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
