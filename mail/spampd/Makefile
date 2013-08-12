# Created by: chris
# $FreeBSD: mail/spampd/Makefile 324181 2013-08-03 08:45:51Z az $

PORTNAME=	spampd
PORTVERSION=	2.30
PORTREVISION=	5
CATEGORIES=	mail perl5
MASTER_SITES=	http://www.worlddesign.com/Content/rd/mta/spampd/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Spamassassin SMTP Proxy

RUN_DEPENDS=	spamc:${PORTSDIR}/mail/p5-Mail-SpamAssassin \
		p5-Net-Server>=0:${PORTSDIR}/net/p5-Net-Server

NO_BUILD=	yes
PLIST_FILES=	sbin/spampd
USES=		perl5
USE_RC_SUBR=	spampd

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/spampd ${PREFIX}/sbin

.include <bsd.port.mk>
