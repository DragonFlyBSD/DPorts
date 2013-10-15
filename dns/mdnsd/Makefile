# Created by: Dan Pelleg <daniel+mdnsd@pelleg.org>
# $FreeBSD: dns/mdnsd/Makefile 327719 2013-09-20 16:31:57Z bapt $

PORTNAME=	mdnsd
PORTVERSION=	0.7G
PORTREVISION=	1
CATEGORIES=	dns
MASTER_SITES=	http://www.cs.cmu.edu/~dpelleg/download/

MAINTAINER=	daniel+mdnsd@pelleg.org
COMMENT=	Advertise a service via Rendezvous

PLIST_FILES=	bin/mhttp\
		bin/mquery

NO_STAGE=	yes
do-install:
	@${ECHO_MSG} "Installing files"
.for i in mhttp mquery
	@${INSTALL} ${COPY} ${_BINOWNGRP} ${WRKSRC}/${i} ${PREFIX}/bin
.endfor

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
