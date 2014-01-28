# Created by: sec@42.org
# $FreeBSD: irc/sic/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	sic
PORTVERSION=	0.23a
CATEGORIES=	irc
MASTER_SITES=	ftp://ftp.funet.fi/pub/unix/irc/sic/
EXTRACT_SUFX=	.tgz

MAINTAINER=	sec@42.org
COMMENT=	Another 'Internet Relay Chat' Client

GNU_CONFIGURE=	yes

PLIST_SUB+=	VERSION="${PORTVERSION}"

MAN1=		sic.1
MAN5=		sic-alias.5 sic-server.5

NO_STAGE=	yes
.include <bsd.port.mk>
