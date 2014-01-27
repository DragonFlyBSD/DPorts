# Created by: Lasse L. Johnsen (lasse@freebsdcluster.org)
# $FreeBSD: net/imapproxy/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	imapproxy
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://www.freebsdcluster.org/~lasse/software/

MAINTAINER=	lasse@freebsdcluster.org
COMMENT=	ImapProxy is a caching IMAP proxy daemon to be used with Horde/IMP

GNU_CONFIGURE=	yes
HAS_CONFIGURE=	yes

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/sbin
	${INSTALL_DATA} ${WRKSRC}/example.conf ${PREFIX}/etc/imapproxy.conf.dist

.include <bsd.port.mk>
