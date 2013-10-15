# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: www/p5-Template-Plugin-Number-Format/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Template-Plugin-Number-Format
PORTVERSION=	1.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Plugin/filter interface to Number::Format

RUN_DEPENDS=	p5-Number-Format>0:${PORTSDIR}/textproc/p5-Number-Format \
		p5-Template-Toolkit>=2.07:${PORTSDIR}/www/p5-Template-Toolkit
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Template::Plugin::Number::Format.3

NO_STAGE=	yes
.include <bsd.port.mk>
