# Created by: Rick & Samu
# $FreeBSD: security/sniff/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=		sniff
PORTVERSION=		1.0
CATEGORIES=		security
MASTER_SITES=		LOCAL/fenner

MAINTAINER=		ports@FreeBSD.org
COMMENT=		Program to sniff logins and passwords

MAN1=			sniff.1

HAS_CONFIGURE=		yes
CONFIGURE_SCRIPT=	configure

PLIST_FILES=		sbin/sniff

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|PREFIX=/usr/local|PREFIX=${PREFIX}|g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
