# Created by: Janos Mohacsi <janos.mohacsi@bsd.hu>
# $FreeBSD: databases/rrdman/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	rrdman
PORTVERSION=	1.0.1
PORTREVISION=	4
CATEGORIES=	databases
MASTER_SITES=	SF/rrfw/${PORTNAME}/${PORTVERSION}

MAINTAINER=	jmohacsi@bsd.hu
COMMENT=	Apply Holt-Winters prediction parameters to RRD data

BUILD_DEPENDS=	rrdtool:${PORTSDIR}/databases/rrdtool
RUN_DEPENDS:=	${BUILD_DEPENDS}

GNU_CONFIGURE=	YES
USES=		perl5
PLIST_FILES=	bin/rrd_hwreapply
MAN1=		rrd_hwreapply.1

NO_STAGE=	yes
.include <bsd.port.mk>
