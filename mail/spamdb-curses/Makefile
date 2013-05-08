# Created by: Martin Tournoij <martin@arp242.net>
# $FreeBSD: ports/mail/spamdb-curses/Makefile,v 1.3 2012/11/17 05:59:14 svnexp Exp $

PORTNAME=	spamdb-curses
PORTVERSION=	1.2
CATEGORIES=	mail python
MASTER_SITES=	http://code.arp242.net/spamdb-curses/downloads/

MAINTAINER=	martin@arp242.net
COMMENT=	Curses interface for OpenBSD spamd spam database (spamdb)

LICENSE=	MIT

RUN_DEPENDS=	${LOCALBASE}/sbin/spamdb:${PORTSDIR}/mail/spamd

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
FETCH_ARGS=	-Fpr

.include <bsd.port.mk>
