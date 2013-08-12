# Created by: roam@FreeBSD.org
# $FreeBSD: sysutils/stalepid/Makefile 324222 2013-08-04 12:30:54Z az $

PORTNAME=	stalepid
PORTVERSION=	1.0.b1
CATEGORIES=	sysutils
MASTER_SITES=	http://devel.ringlet.net/sysutils/stalepid/
DISTNAME=	${PORTNAME}-${PORTVERSION:S/.b/pre/}

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Check for stale pid files and remove them

RUN_DEPENDS=	p5-Error>=0:${PORTSDIR}/lang/p5-Error

USES=		perl5
USE_PERL5=	run

WRKSRC=		${WRKDIR}/${DISTNAME}

MAN1=		stalepid.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/stalepid

.include <bsd.port.mk>
