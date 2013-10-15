# Created by: Peter Wemm <peter@netplex.com.au>
# $FreeBSD: www/transproxy/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	transproxy
PORTVERSION=	1.6
CATEGORIES=	www
MASTER_SITES=	SF

EXTRACT_SUFX=	.tgz

MAINTAINER=	sem@FreeBSD.org
COMMENT=	Transparent HTTP proxy for ipfw's fwd rule or IPFILTER's ipnat command

USE_RC_SUBR=	tproxy

MAN8=		tproxy.8

PLIST_FILES=	sbin/tproxy sbin/tproxyrun sbin/tproxywatch

NO_STAGE=	yes
.include <bsd.port.mk>
