# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: misc/p5-Geo-Cache/Makefile 332733 2013-11-04 14:41:18Z vanilla $

PORTNAME=	Geo-Cache
PORTVERSION=	0.11
CATEGORIES=	misc perl5 geography
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Object interface for GPS waypoints

RUN_DEPENDS=	p5-Time-modules>=0:${PORTSDIR}/devel/p5-Time-modules \
		p5-XML-Simple>=0:${PORTSDIR}/textproc/p5-XML-Simple
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
