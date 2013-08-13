# Created by: mat
# $FreeBSD: www/p5-MasonX-Profiler/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	MasonX-Profiler
PORTVERSION=	0.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Mason per-component profiler

BUILD_DEPENDS=	p5-HTML-Mason>=0:${PORTSDIR}/www/p5-HTML-Mason \
		p5-Time-HiRes>=0:${PORTSDIR}/devel/p5-Time-HiRes
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		MasonX::Profiler.3

.include <bsd.port.mk>
