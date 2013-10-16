# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-Template-Plugin-Lingua-EN-Inflect/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Template-Plugin-Lingua-EN-Inflect
PORTVERSION=	0.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Interface Template Toolkit to Lingua::EN::Inflect module

BUILD_DEPENDS=	p5-Lingua-EN-Inflect>=0:${PORTSDIR}/textproc/p5-Lingua-EN-Inflect \
		p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Template::Plugin::Lingua::EN::Inflect.3

NO_STAGE=	yes
.include <bsd.port.mk>
