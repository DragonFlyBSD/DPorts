# Created by: Jarrod Sayers <jarrod@netleader.com.au>
# $FreeBSD: dns/dnscheck/Makefile 327719 2013-09-20 16:31:57Z bapt $

PORTNAME=	dnscheck
PORTVERSION=	1.3
CATEGORIES=	dns
MASTER_SITES=	http://www.downtools.com.au/~jarrod/projects/dnscheck/download/

MAINTAINER=	jarrod@downtools.com.au
COMMENT=	DNS zone sanity checker

USES=		perl5

PLIST_FILES=	bin/dnscheck

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e 's|^#!/usr/bin/perl |#!${PERL} |' ${WRKSRC}/dnscheck.pl

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/dnscheck.pl ${PREFIX}/bin/dnscheck

.include <bsd.port.mk>
