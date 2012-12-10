# New ports collection makefile for:	transproxy
# Date created:			Fri Mar 27 21:24:13 WST 1998
# Whom:				Peter Wemm <peter@netplex.com.au>
#
# $FreeBSD: ports/www/transproxy/Makefile,v 1.20 2012/11/17 06:03:09 svnexp Exp $
#

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

.include <bsd.port.mk>
