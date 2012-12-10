# New ports collection makefile for:	sniff
# Date created:		7 December 1998
# Whom:			Rick & Samu
#
# $FreeBSD: ports/security/sniff/Makefile,v 1.12 2012/11/17 06:01:20 svnexp Exp $
#

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

post-patch:
	@${REINPLACE_CMD} -e 's|PREFIX=/usr/local|PREFIX=${PREFIX}|g' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
