# New ports collection makefile for:	rrdman
# Date created:		2007-06-07
# Whom:			Janos Mohacsi <janos.mohacsi@bsd.hu>
#
# $FreeBSD: ports/databases/rrdman/Makefile,v 1.12 2012/11/17 05:55:23 svnexp Exp $
#

PORTNAME=	rrdman
PORTVERSION=	1.0.1
PORTREVISION=	4
CATEGORIES=	databases
MASTER_SITES=	SF/rrfw/${PORTNAME}/${PORTVERSION}

MAINTAINER=	janos.mohacsi@bsd.hu
COMMENT=	Apply Holt-Winters prediction parameters to RRD data

BUILD_DEPENDS=	rrdtool:${PORTSDIR}/databases/rrdtool
RUN_DEPENDS:=	${BUILD_DEPENDS}

GNU_CONFIGURE=	YES
USE_PERL5=	YES
PLIST_FILES=	bin/rrd_hwreapply
MAN1=		rrd_hwreapply.1

.include <bsd.port.mk>
