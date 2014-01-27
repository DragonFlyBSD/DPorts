# Created by: milki <milki@rescomp.berkeley.edu>
# $FreeBSD: devel/p5-POE-Component-Hailo/Makefile 340549 2014-01-21 05:12:40Z milki $

PORTNAME=	POE-Component-Hailo
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:HINRIK
PKGNAMEPREFIX=	p5-

MAINTAINER=	milki@FreeBSD.org
COMMENT=	Non-blocking wrapper around Hailo

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE \
		p5-Hailo>=0:${PORTSDIR}/textproc/p5-Hailo
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
