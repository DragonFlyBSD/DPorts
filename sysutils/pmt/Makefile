# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: sysutils/pmt/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	pmt
PORTVERSION=	0.2
CATEGORIES=	sysutils
MASTER_SITES=	http://hansmi.ch/download/pmt/ \
		LOCAL/glarkin

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	A small collection of filters which can be added to UNIX pipes

USE_BZIP2=	yes
USE_GMAKE=	yes

PLIST_FILES=	bin/pmt

NO_STAGE=	yes
do-install:
	@${CP} ${WRKSRC}/pmt ${PREFIX}/bin

.include <bsd.port.pre.mk>
.if ${OSVERSION} >= 800071
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-config.mak
.endif
.include <bsd.port.post.mk>
