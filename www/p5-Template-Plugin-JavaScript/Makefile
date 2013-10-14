# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: www/p5-Template-Plugin-JavaScript/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Template-Plugin-JavaScript
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Encodes text to be safe in JavaScript

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Template::Plugin::JavaScript.3

NO_STAGE=	yes
.include <bsd.port.mk>
