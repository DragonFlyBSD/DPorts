# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: www/p5-Template-Timer/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Template-Timer
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Rudimentary profiling for Template Toolkit

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Template::Timer.3

NO_STAGE=	yes
.include <bsd.port.mk>
